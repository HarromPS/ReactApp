#include <stdio.h>  // Incomplete code

int main()
{
    // Q4 Take name and salary of two employees as input from the user
    // and write them to a text file in the following format:
    // name,3300
    // name, 7700

    FILE *ptr;
    char name[10] ;
    float salary[10];
    for (int i = 0; i < 5; i++)
    {

        printf("Enter the name of the employee:\n");   // for first employee
        scanf("%s",name[i]);

        printf("Enter the salary of the employee:\n");
        scanf("%f",salary[i]);
    }

    ptr = fopen("employee.txt", "w");

    for (int i = 0; i < 5; i++)
    {
        fprintf(ptr, "%s,", name[i]);
        fprintf(ptr, "%.1f\n", salary[i]);
    }
    fclose(ptr);
    printf("Printed successfully\n");

    return 0;
}