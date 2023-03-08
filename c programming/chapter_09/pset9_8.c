#include <stdio.h>
#include <string.h> // library of string

typedef struct bank_account
{
    int code;
    float salary;       //INCOMPLETE CODE DO NOT COMPILE
    char name;
} ac;

void display(ac c)
{
    printf("The name of employee is : %s\n", c.name);
    printf("The salary of employee is : %s\n", c.salary);
    printf("The code of employee is : %s\n", c.code);
}

int main()
{
    // Q8 Create a structure representing a bank account of a customer
    // What filds did you use and why ?

    int n,i;
    printf("Enter the number of employees in your bank\n");
    scanf("%d", n);
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        struct bank_account el;

        printf("Enter e%d's name\n", i + 1);
        scanf("%s", &el.name); // string input %s

        printf("Enter the code of e%d\n", i + 1);
        scanf("%d", &el.code); // int input %d

        printf("Enter e%d's salary\n", i + 1);
        scanf("%f", &el.salary); // float input %f
    }

    // for( i=0;i<n;i++)
    // {
    //     display(n);
    // }
    return 0;
}