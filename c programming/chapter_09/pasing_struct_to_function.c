#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
// PASSING STRUCTURE TO FUNCTION

void show(struct employee el)
{

    printf("The Name of the Employee is: %s\n", el.name);
    printf("The code for the Employee is: %d\n", el.code);
    printf("The salary of the Employee is: %.2f\n", el.salary);

    el.code = 121; // trying to change using call by reference
                   // in structure call by reference do not helps in
                   // changing the values of the main function
                   // even after using pointers
}

int main()
{
    // the Pointers to structure can be created as follows:

    struct employee el;
    struct employee *ptr; // another variable as a pointer points to the
                          // struct employee type of variable i.e --> el

    ptr = &el;         // ptr stores the address of el
    (*ptr).code = 100; // *ptr .code stores the integer value of el
    // (*ptr).code = 100 can be written like this also i.e ==> ptr->code =100

    ptr->salary = 12.2; //  *ptr .salary stores the float value of el

    strcpy(ptr->name, "Hello"); // stores character value

    show(el);

    return 0;
}