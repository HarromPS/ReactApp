#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Cl Practical 10: File input / output
// Q2
typedef struct Employee
{
    int serial_no;
    char name[30], sex[30];
    long int number;
    float gross_salary;
} EY;

int create()
{
    EY *b;
    FILE *ptr;
    int n, i, j;
    printf("Enter the number of records to fill out of 20\n==>");
    scanf("%d", &n);
    b = (EY *)calloc(sizeof(EY), n);
    ptr = fopen("C:\\Users\\shivh\\Desktop\\VS codes\\Programming\\Practice\\week_09\\employee.txt", "w");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details of %d employee\n", i + 1);
        fflush(stdin);
        printf("Name: ");
        scanf("%s", &b[i].name);
        printf("Number: ");
        scanf("%ld", &b[i].number);
        printf("Serial No: ");
        scanf("%d", &b[i].serial_no);
        printf("Gender(male/female): ");
        scanf("%s", &b[i].sex);
        printf("Gross Salary: ");
        scanf("%f", &b[i].gross_salary);

        fwrite(&b[i], sizeof(EY), 1, ptr);
    }
    fclose(ptr);
    return n;
}

void display()
{
    EY B;
    FILE *ptr;
    if (ptr == NULL)
    {
        printf("Error opening the file\n");
    }
    ptr = fopen("C:\\Users\\shivh\\Desktop\\VS codes\\Programming\\Practice\\week_09\\employee.txt", "r");

    while (fread(&B, sizeof(EY), 1, ptr))
    {
        printf("%d)\t %s\t\t%ld\t\t%s\t%f\n", B.serial_no, B.name, B.number, B.sex, B.gross_salary);
    }
    fclose(ptr);
}
void append()
{
    EY *b;
    FILE *ptr;
    int n, i, j;
    printf("Enter the number of records to fill out of 20\n==>");
    scanf("%d", &n);
    b = (EY *)calloc(sizeof(EY), n);
    ptr = fopen("C:\\Users\\shivh\\Desktop\\VS codes\\Programming\\Practice\\week_09\\employee.txt", "a+");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details of %d employee\n", n + i + 1);
        fflush(stdin);
        printf("Name: ");
        scanf("%s", &b[i].name);
        printf("Number: ");
        scanf("%ld", &b[i].number);
        printf("Serial No: ");
        scanf("%d", &b[i].serial_no);
        printf("Gender(male/female): ");
        scanf("%s", &b[i].sex);
        printf("Gross Salary: ");
        scanf("%f", &b[i].gross_salary);

        fwrite(&b[i], sizeof(EY), 1, ptr);
    }
    fclose(ptr);
}
void update()
{
    EY B;
    FILE *ptr, *temp;
    if (ptr == NULL)
    {
        printf("Error opening the file\n");
    }
    ptr = fopen("C:\\Users\\shivh\\Desktop\\VS codes\\Programming\\Practice\\week_09\\employee.txt", "r");
    temp = fopen("C:\\Users\\shivh\\Desktop\\VS codes\\Programming\\Practice\\week_09\\employee_temp.txt", "w");
    printf("Enter the serial no of employee: ");
    int n, found;
    scanf("%d", &n);
    while (fread(&B, sizeof(EY), 1, ptr))
    {
        if (n == B.serial_no)
        {
            found = 1;
            fflush(stdin);
            printf("Enter new Salary: ");
            scanf("%f", &B.gross_salary);
            fwrite(&B, sizeof(EY), 1, ptr);
        }
        fwrite(&B, sizeof(EY), 1, temp);
    }

    fclose(ptr);
    fclose(temp);
    if (found)
    {
        temp = fopen("C:\\Users\\shivh\\Desktop\\VS codes\\Programming\\Practice\\week_09\\employee_temp.txt", "r");
        ptr = fopen("C:\\Users\\shivh\\Desktop\\VS codes\\Programming\\Practice\\week_09\\employee.txt", "a+");
        while (fread(&B, sizeof(EY), 1, temp))
        {
            fwrite(&B, sizeof(EY), 1, ptr);
        }
        fclose(ptr);
        fclose(temp);
    }
}
void delete ()
{
}
int main()
{
    int x;
    do
    {
        printf("\nChoose\n1) Create a record\n2) Display the record\n3) ");
        printf("Append data of a new employee\n4) Update salary\n5) Exit\n==>");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            create();
            break;
        case 2:
            printf("\n");
            display();
            break;
        case 3:
            printf("\n");
            append();
            break;
        case 5:
            printf("Exit!\n");
            break;
        case 4:
            printf("\n");
            update();
            break;
        case 6:
            delete ();
        default:
            printf("Enter a valid input\n");
            break;
        }
    } while (x != 5);

    return 0;
}
