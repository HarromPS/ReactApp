#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

// This a PhoneBook Application

typedef struct PhoneBook
{
    char Fname[20], Lname[10];
    long int mobile_no;
    char email[20], address[30];
    char DOB[10];

} PhoneBook;

// Adding contacts
int addContact(/*PhoneBook *Contact*/)
{
    system("cls");
    PhoneBook Contact;
    FILE *ptr;
    ptr = fopen("data", "ab+");
    if (ptr == NULL)
    {
        printf("Error opening the file...\n");
    }
    else
    {
        // Contact = (PhoneBook *)calloc(sizeof(PhoneBook), 1);
        printf("\n\tEnter the Details for the contact:\n");
        fflush(stdin);
        printf("\n\tFirst Name: ");
        scanf("%s", &(Contact.Fname));
        printf("\n\tLast Name: ");
        scanf("%s", &(Contact.Lname));
        printf("\n\tMobile No : ");
        scanf("%ld", &(Contact.mobile_no));
        printf("\n\tEmail: ");
        scanf("%s", &(Contact.email));
        printf("\n\tAddress: ");
        scanf("%s", &(Contact.address));
        printf("\n\tDate of Birth(DD/MM/YY): ");
        scanf("%s", &(Contact.DOB));

        fwrite(&Contact, sizeof(Contact), 1, ptr);
        fflush(stdin);
        fclose(ptr);
        printf("\n \tContact Saved Successfully\n\n");
        printf("\n\n\t\tEnter any key: ");
        getch();
    }
}

// Display All contacts
void Display(/*PhoneBook PB*/)
{
    system("cls");
    PhoneBook PB;
    FILE *ptr;
    ptr = fopen("data", "rb");
    if (ptr == NULL)
    {
        printf("Error opening the file...\n");
    }
    else
    {
        // if (fread == NULL)
        // {
        //     printf("\n\n\tNO DATA FOUND\n\n");
        // }
        while (fread(&PB, sizeof(PB), 1, ptr) == 1)
        {
            printf("\nTHE SAVED CONTACT ARE:\n\n");
            printf("\nName: %s %s\n", PB.Fname, PB.Lname);
            printf("\nMobile No : %ld\n", PB.mobile_no);
            printf("\nEmail: %s\n", PB.email);
            printf("\nAddress: %s\n", PB.address);
            printf("\nDate of Birth: %s\n", PB.DOB);
            fflush(stdin);
        }
        fflush(stdin);
        fclose(ptr);
        system("cls");
        printf("\n\n\t\tEnter any key: ");
        getch();
        // system("cls");
    }
}

// Searching a contact
int Search()
{
    system("cls");
    PhoneBook PB;
    FILE *ptr;
    ptr = fopen("data", "rb");
    if (ptr == NULL)
    {
        printf("Error opening the file...\n");
    }
    printf("Search by Name - '1'\nSearch by Mobile No- '2'\n==>");
    int x;
    long int no;
    char name[30];

    scanf("%d", &x);

    if (x == 1)
    {
        printf("\n\t\tEnter Name: ");
        scanf("%s", &name);
        while (fread(&PB, sizeof(PB), 1, ptr) == 1)
        {
            if (strcmp(name, PB.Fname) == 0)
            {
                printf("\nTHE SAVED CONTACT ARE:\n\n");
                printf("Name: %s %s\n", PB.Fname, PB.Lname);
                printf("Mobile No : %ld\n", PB.mobile_no);
                printf("Email: %s\n", PB.email);
                printf("Address: %s\n", PB.address);
                printf("Date of Birth: %s\n", PB.DOB);
            }
            else
            {
                printf("\n\n\tCONTACT NOT FOUND\n");
            }
        }
    }
    else if (x == 2)
    {
        printf("\n\t\tEnter Mobile No: ");
        scanf("%ld", &no);
        while (fread(&PB, sizeof(PB), 1, ptr) == 1)
        {
            if (PB.mobile_no == no)
            {
                printf("\nTHE SAVED CONTACT ARE:\n\n");
                printf("Name: %s %s\n", PB.Fname, PB.Lname);
                printf("Mobile No : %ld\n", PB.mobile_no);
                printf("Email: %s\n", PB.email);
                printf("Address: %s\n", PB.address);
                printf("Date of Birth: %s\n", PB.DOB);
            }
            else
            {
                printf("\n\n\tCONTACT NOT FOUND\n");
            }
        }
    }
    fflush(stdin);
    fclose(ptr);
    printf("\n\n\t\tEnter any key: ");
    getch();
}

// Deleting a contact
int Delete()
{
    system("cls");
    int x = 0, found;
    long int no;
    char name[50];
    PhoneBook PB;
    FILE *ptr, *temp;
    ptr = fopen("data", "rb");
    temp = fopen("temp", "wb+");
    if (ptr == NULL)
    {
        printf("\n\n\tError opening the file...\n");
    }
    else
    {

        printf("\n\tSearch by Name - '1'\n\tSearch by Mobile No- '2'\n\tExit '3'\n==>");
        scanf("%d", &x);
        if (x == 1)
        {
            printf("\n\t\tEnter Name: ");
            scanf("%s", &name);
            fflush(stdin);
            while (fread(&PB, sizeof(PB), 1, ptr) == 1)
            {

                if (strcmp(PB.Fname, name) == 0)
                {
                    found = 1;
                }
                else
                {
                    fwrite(&PB, sizeof(PB), 1, temp);
                }
            }
        }
        else if (x == 2)
        {
            printf("\n\t\tEnter Mobile No: ");
            scanf("%ld", &no);
            fflush(stdin);
            while (fread(&PB, sizeof(PB), 1, ptr) == 1)
            {
                if (PB.mobile_no == no)
                {
                    found = 1;
                }
                else
                {
                    fwrite(&PB, sizeof(PB), 1, temp);
                }
            }
        }
        else
        {
            printf("\n\n\t\tENTER A VALILD INPUT\n\n");
        }
    }
    if (found != 1)
    {
        printf("\n\tNO DETAILS FOUND\n\n");
        remove("temp.txt");
    }

    fclose(ptr);
    fclose(temp);

    remove("data");
    rename("temp", "data");
    printf("\nContact Deleted Successfully\n\n");
    fflush(stdin);

    printf("\n\n\t\tEnter any key: ");
    getch();
}

// Updating any contact
int update()
{
    system("cls");
    int x = 0, found;
    long int no;
    char name[30];
    PhoneBook A, B;
    FILE *ptr, *temp;
    ptr = fopen("data", "rb+");
    temp = fopen("temp", "wb+");
    if (ptr == NULL)
    {
        printf("Error opening the file...\n");
        return 0;
    }
    else
    {

        printf("Search by Name - '1'\nSearch by Mobile No- '2'\nExit '3'\n==>");
        fflush(stdin);
        scanf("%d", &x);
        if (x == 1)
        {
            printf("\n\t\tEnter Name: ");
            scanf("%s", &name);
            while (fread(&A, sizeof(A), 1, ptr) == 1)
            {
                if (strcmp(name, A.Fname) == 0)
                {
                    found = 1;
                    printf("\n\n\tEnter New Contact Details:\n\n");
                    printf("\nFirst Name: ");
                    scanf(" %s", &B.Fname);
                    printf("\nLast Name: ");
                    scanf(" %s", &B.Lname);
                    printf("\nMobile No :");
                    scanf("%ld", &B.mobile_no);
                    printf("\nEmail: ");
                    scanf("%s", &B.email);
                    printf("\nAddress: ");
                    scanf("%s", &B.address);
                    printf("\nDate of Birth: ");
                    scanf("%s", &B.DOB);
                    fseek(ptr, -sizeof(A), SEEK_CUR);
                    fwrite(&B, sizeof(A), 1, temp);
                }
            }
        }
        else if (x == 2)
        {
            printf("\n\t\tEnter Mobile No: ");
            scanf("%ld", &no);
            while (fread(&A, sizeof(A), 1, ptr) == 1)
            {
                if (A.mobile_no == no)
                {
                    found = 1;
                    printf("\nEnter New Contact Details:\n\n");
                    printf("First Name: ");
                    scanf(" %s", &B.Fname);
                    printf("Last Name: ");
                    scanf(" %s", &B.Lname);
                    printf("Mobile No :");
                    scanf("%ld", &B.mobile_no);
                    printf("Email: ");
                    scanf("%s", &B.email);
                    printf("Address: ");
                    scanf("%s", &B.address);
                    printf("Date of Birth: ");
                    scanf("%s", &B.DOB);
                    fseek(ptr, -sizeof(A), SEEK_CUR);
                    fwrite(&B, sizeof(A), 1, temp);
                }
            }
            fflush(stdin);
        }
        else
        {
            fwrite(&B, sizeof(A), 1, temp);
            printf("\n\n\t\tENTER A VALILD INPUT\n\n");
            fflush(stdin);
        }
    }
    if (found != 1)
    {
        printf("\n\n\tNo Details Found\n\n");
    }
    else
    {
        printf("\nContact Changed Successfully\n\n");
    }

    fclose(ptr);
    fclose(temp);
    remove("data");
    rename("temp","data");
    fflush(stdin);
    printf("\n\n\t\tEnter any key: ");
    getch();
    system("cls");
}

void DeleteAll()
{
    char choice;
    system("cls");
    remove("./data");
    printf("\n\n\tALL THE DATA IS DELETED\n\n");
    printf("\n\n\tENTER ANY KEY\n\n");
    getch();
}
// Driver's Code
int main()
{
    system("color 4f");
    system("cls");
    printf("\n\t\t---------------------------------------\n");
    printf("\t\t   Wel-Come To The Contact Application");
    printf("\n\t\t---------------------------------------\n\n");
    int ok = 0, i;
    char user_name[20];
    char password[9], temp[9];
    // while (ok != 1)
    // {
    //     printf("\t\tENTER USERNAME: ");
    //     scanf("%s", user_name);
    //     printf("\n\t\tENTER PASSWORD: ");
    //     for (i = 0; i < 8; i++)
    //     {
    //         // scanf("%c",&temp[i]);
    //         password[i] = getch();
    //         ;
    //         printf("*");
    //     }
    //     password[i] = '\0';
    //     if (!strcmp(user_name, "admin") && !strcmp(password, "12345678"))
    //     {

    //         break;
    //     }
    //     else
    //     {
    //         system("cls");

    //         printf("\n\n\t\t    INCORRECT USERNAME OR PASSWORD\n");
    //         printf("\n\t\t---------------------------------------\n");
    //         printf("\n\t\t\t\tTRY AGAIN\n\n");
    //     }
    // }
    system("cls");
    printf("\n\t\t---------------------------------------\n");
    printf("\n\n\t\t\tLOGGED IN SUCCESSFULLY\n\n");
    printf("\n\t\t---------------------------------------\n");

    // Dynamic memory allocation
    PhoneBook *Contact = (PhoneBook *)malloc(10 * sizeof(PhoneBook));
    int serial_no = 0, x;
    int No = 0;
    // ok=
    while (x != 8)
    {
        // if (ok == 1)
        // {
        //     system("cls");
        // }
        // else
        // {
        //     ok = 1;
        // }

        printf("\nEnter your choice\n");
        printf("1) Add number\n2) Show all contact\n3) Search Contact\n4) Modify Contact\n");
        printf("5) Delete contact\n6) App Info\n7) Delete all data\n8) Exit\n==> :: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("\n");
            addContact(Contact);

            break;
        case 2:
            printf("\n");
            Display();
            break;
        case 3:
            Search();
            break;
        case 4:
            printf("\n");
            update();
            break;
        case 5:
            printf("\n");
            Delete();
            break;
        case 6:

            system("cls");
            printf("\tThis Phonebook application is a set of basic functions of Adding\n");
            printf("\t\tDeleting, Updating & Searching new contacts.\n");
            printf("It has used the concepts of file handling & Data Structures in this project.\n\n\t\t   Thank You for using this App\n\n");
            printf("\t\tDeveloped by ~ Hariom Pravin Shivhare\n\n");
            printf("\n\n\t\t\t\tENTER ANY KEY\n\n");
            getch();

            break;
        case 7:
            printf("\n");
            DeleteAll();

        case 8:
            printf("\n\t\t-------------------EXIT-----------------------\n");
            break;
        default:
            printf("\n\n\t\tENTER BETWEEN 1 TO 8 \n");
            break;
        }
    }
    return 0;
}
