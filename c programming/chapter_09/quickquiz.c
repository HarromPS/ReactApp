#include <stdio.h>
#include <string.h> // library of string

struct employee
{
    int code;
    float salary;
    char name;
};

int main()
{
    // Quick quiz: Write a program to store the details of 3 employees
    // from user defined data. Use the structure declared.

    for (int i = 1; i < 3; i++)
    {
        struct employee el;

        printf("Enter the value of e%d\n", i);
        scanf("%d", &el.code);       // int input %d

        printf("Enter e%d's salary\n",i);
        scanf("%f", &el.salary);    // float input %f

        printf("Enter e%d's name\n",i);
        scanf("%s", &el.name);       // string input %s
    }
    return 0;
}