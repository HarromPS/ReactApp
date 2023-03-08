#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    // the Pointers to structure can be created as follows:

    struct employee el;
    struct employee *ptr; // another variable as a pointer points to the
                          // struct employee type of variable

    ptr = &el;         // ptr stores the address of el
    (*ptr).code = 100; // *ptr .code stores the integer value of el

    (*ptr).salary = 12.2; //  *ptr .salary stores the value of the salary

    strcpy((*ptr).name, "Hello");

    printf("The Name of the Employee is: %s\n", el.name);
    printf("The code for the Employee is: %d\n", el.code);
    printf("The salary of the Employee is: %.2f\n", el.salary);

    return 0;
}