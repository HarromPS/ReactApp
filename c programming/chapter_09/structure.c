#include <stdio.h>
#include <string.h> // string library

struct employee // user defined DATATYPE like
{               // int employee
    int code;
    float salary; // with different datatypes in it
    char name[10];
}; // ends with semicolon

int main()
{

    int a = 34;
    float b = 23.23;
    char c = 'A';

    struct employee el; // function call similar to 'int employee'(datatype)
                        // and 'el' as its variable

    el.code = 100; // dot(.) means member operator
                   // el.code where el is variable of code which is a (integer)
                   // equals to 100

    el.salary = 1200.12; // el.salary --> float sets to 1200.12
    // el.name="Name";      -->     won't work

    strcpy(el.name, "Abhi");

    printf("code = %d\n", el.code);
    printf("salary = %.2f\n", el.salary);
    printf("Name = %s\n", el.name);

    return 0;
}