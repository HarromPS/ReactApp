#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Cl Practical 10: File input / output
// Q1
typedef struct bloodDoners
{
    char name[30], address[30];
    int age, bType;
} BD;

void create()
{
    BD *b;
    FILE *ptr;
    int n, i, j;
    printf("Enter the number of records to fill out of 20\n==>");
    scanf("%d", &n);
    b = (BD *)calloc(sizeof(BD), n);
    ptr = fopen("hospital.txt", "ab+");

    // ptr = fopen("hospital.txt", "w");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details of %d donor\n", i + 1);
        fflush(stdin);
        printf("Name: ");
        scanf("%s", &b[i].name);
        printf("Address: ");
        scanf("%s", &b[i].address);
        printf("Age: ");
        scanf("%d", &b[i].age);
        printf("Blood type(1,2,3,4): ");
        scanf("%d", &b[i].bType);

        fwrite(&b[i], sizeof(BD), 1, ptr);
    }
    fclose(ptr);
}

void display()
{
    BD B;
    FILE *ptr;
    ptr = fopen("hospital.txt", "r");
    if (ptr == NULL)
    {
        printf("Error opening the file\n");
    }
    while (fread(&B, sizeof(BD), 1, ptr))
    {
        printf("%s\t\t%s\t\t%d\t%d\n", B.name, B.address, B.age, B.bType);
    }
    fclose(ptr);
}
void display_age_bd()
{
    BD B;
    FILE *ptr;
    if (ptr == NULL)
    {
        printf("Error opening the file\n");
    }
    ptr = fopen("hospital.txt", "r");
    while (fread(&B, sizeof(BD), 1, ptr))
    {
        if (B.age < 25 && B.bType == 2)
        {
            printf("%s\t\t%s\t\t%d\t%d\n", B.name, B.address, B.age, B.bType);
        }
    }
    fclose(ptr);
}

int main()
{
    int x;
    do
    {
        printf("\nChoose\n1) Create a record\n2) Display the record\n3)");
        printf("Display the record with age less than 25 and blood grp 2\n4)Exit\n==>");
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
            display_age_bd();
            break;
        case 4:
            printf("Exit!\n");
            break;
        default:
            printf("Enter a valid input\n");
            break;
        }
    } while (x != 4);

    return 0;
}
