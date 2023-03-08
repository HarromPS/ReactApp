#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact
{
    char name[30];
    char country_code[4];
    long int mble_no;
    char gender[8];
    char email[100];
};
typedef struct contact contact;

// All function declaration.
void remove_all();
void print_menu();
void add_contact();
void list_record();
void search_contact();
void remove_contact();
void update_contact();
void take_input(contact *p);

// Program starts here.
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
    while (ok != 1)
    {
        printf("\t\tENTER USERNAME: ");
        scanf("%s", user_name);
        printf("\n\t\tENTER PASSWORD: ");
        for (i = 0; i < 8; i++)
        {
            // scanf("%c",&temp[i]);
            password[i] = getch();
            ;
            printf("*");
        }
        password[i] = '\0';
        if (!strcmp(user_name, "admin") && !strcmp(password, "12345678"))
        {

            break;
        }
        else
        {
            system("cls");

            printf("\n\n\t\t    INCORRECT USERNAME OR PASSWORD\n");
            printf("\n\t\t---------------------------------------\n");
            printf("\n\t\t\t\tTRY AGAIN\n\n");
        }
    }
    system("cls");
    printf("\n\t\t---------------------------------------\n");
    printf("\n\t\t\tLOGGED IN SUCCESSFULLY\n");
    printf("\n\t\t---------------------------------------\n");

    start();
    return 0;
}

// This function will start our program.
void start()
{
    int choice;
    while (choice != 8)
    {
        print_menu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            list_record();
            getchar();
            getchar();
            break;
        case 2:
            add_contact();
            getchar();
            getchar();
            break;
        case 3:
            search_contact();
            getchar();
            getchar();
            break;
        case 4:
            remove_contact();
            getchar();
            getchar();
            break;
        case 5:
            update_contact();
            getchar();
            getchar();
            break;
        case 6:
            remove_all();
            getchar();
            getchar();
            break;
        case 7:
            printf("\n--------------Exit----------------");
        default:
            system("cls");
            printf("Thanks for using phonebook visit again : )\n");
            getchar();
            getchar();
            exit(1);
        }
    }
}

// This will print main menu.
void print_menu()
{

    system("cls");
    printf("\t\t****************************************************************\n");
    printf("\t\t*                  Welcome TO My phone book                    *\n");
    printf("\t\t****************************************************************\n\n");
    printf("\t\t\t1) list record\n\n");
    printf("\t\t\t2) Add contact\n\n");
    printf("\t\t\t3) Search contact Details\n\n");
    printf("\t\t\t4) Remove contact\n\n");
    printf("\t\t\t5) Update contact\n\n");
    printf("\t\t\t6) Delete all contacts\n\n");
    printf("\t\t\t7) exit Phonebook\n\n\n");

    printf("\t\t\t\tEnter your Choice : ");
}

// This function will add contact into phonebook.
void add_contact()
{
    system("cls");
    FILE *fp;
    fp = fopen("phonebook_db", "ab+");
    if (fp == NULL)
    {
        printf("Error in file opening, Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        contact p;
        take_input(&p);
        fwrite(&p, sizeof(p), 1, fp);
        fflush(stdin);
        fclose(fp);
        system("cls");
        printf("Record added Successfully\n");
        printf("Press any key to continue ....\n");
    }
}

// By this we take contact information.
void take_input(contact *p)
{
    system("cls");
    // This getchar is for taking \n occured by previous functions.
    // So that scanset in scanf will work properly.
    getchar();
    printf("Enter name : ");
    // Here we are using scanset '^' - >  until get
    scanf("%[^\n]s", p->name);

    printf("Enter country code : ");
    scanf("%s", p->country_code);

    printf("Enter mobile no : ");
    scanf("%ld", &p->mble_no);

    printf("Enter gender : ");
    scanf("%s", p->gender);

    printf("Enter email : ");
    scanf("%s", p->email);
}

// This function will list contact available in phonebook.
void list_record()
{
    system("cls");
    FILE *fp;
    fp = fopen("phonebook_db", "rb");
    if (fp == NULL)
    {
        printf("Error in file opening, Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        contact p;

        printf("\t\t\t\tHere is all records listed in phonebook\n");
        // fseek(fp,-(sizeof(p)*2L),2);
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            printf("\nName%s", p.name);
            printf("Country name: %s", p.country_code);
            printf("Mobile No: %ld", p.mble_no);
            printf("Gender: %s", p.gender);
            printf("Email: %s", p.email);
            printf("\n");
            fflush(stdin);
        }
        fflush(stdin);
        fclose(fp);
        printf("\n\nPress any key to continue....\n");
    }
}

// This function will search contact in phonebook.
void search_contact()
{
    system("cls");
    long int phone;
    printf("Enter Phone number of the contact you want to search : ");
    scanf("%ld", &phone);

    FILE *fp;
    fp = fopen("phonebook_db", "rb");
    if (fp == NULL)
    {
        printf("Error in file opening, Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        int flag = 0;
        contact p;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if (p.mble_no == phone)
            {
                printf("\nName%s", p.name);
                printf("Country name: %s", p.country_code);
                printf("Mobile No: %ld", p.mble_no);
                printf("Gender: %s", p.gender);
                printf("Email: %s", p.email);
                printf("\n");

                flag = 1;
                break;
            }
            else
                continue;
            // fflush(stdin);
        }
        if (flag == 0)
        {
            system("cls");
            printf("contact is not in the Phonebook\n");
        }
        fflush(stdin);
        fclose(fp);
        printf("\n\nPress any key to continue....\n");
    }
}

// This function will remove contact from phonebook.
void remove_contact()
{
    system("cls");
    long int phone;
    printf("Enter Phone number of the contact you want to remove from phonebook : ");
    scanf("%ld", &phone);

    FILE *fp, *temp;
    fp = fopen("phonebook_db", "rb");
    temp = fopen("temp", "wb+");
    if (fp == NULL)
    {
        printf("Error in file opening, Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        contact p;
        int flag = 0;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if (p.mble_no == phone)
            {
                system("cls");
                printf("contact removed successfully\n");
                flag = 1;
            }
            else
                fwrite(&p, sizeof(p), 1, temp);
            fflush(stdin);
        }
        if (flag == 0)
        {
            system("cls");
            printf("No record found for %d number\n", phone);
        }
        fclose(fp);
        fclose(temp);
        remove("phonebook_db");
        rename("temp", "phonebook_db");
        fflush(stdin);
        printf("Press any key to continue....\n");
    }
}

// This function will update contact information.
void update_contact()
{

    system("cls");
    long int phone;
    printf("Enter Phone number of the contact you want to update details : ");
    scanf("%ld", &phone);

    FILE *fp, *temp;
    fp = fopen("phonebook_db", "rb");
    temp = fopen("temp", "wb+");
    if (fp == NULL)
    {
        printf("Error in file opening, Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        int flag = 0;
        contact p;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if (p.mble_no == phone)
            {
                take_input(&p);
                fwrite(&p, sizeof(p), 1, temp);
                system("cls");
                printf("Data updated successfully\n");
                flag = 1;
            }
            else
                fwrite(&p, sizeof(p), 1, temp);
            fflush(stdin);
        }
        if (flag == 0)
        {
            system("cls");
            printf("No record found for %d number\n", phone);
        }
        fclose(fp);
        fclose(temp);
        remove("phonebook_db");
        rename("temp", "phonebook_db");
        fflush(stdin);
        printf("Press any key to continue....\n");
    }
}

// This function will cls all the data of phonebook.
void remove_all()
{
    char choice;
    system("cls");
    remove("./phonebook_db");
    printf("All data in the phonebook deleted successfully\n");
    printf("Press any key to continue ... \n");
}
