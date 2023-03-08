#include <stdio.h>

int main()
{
    // pointer arithmetics means increment to point to
    // the next memory of that type

    int i = 1;   // memory is of int data type
    int *a = &i; // *a is storing the adderss of i

    printf("The address of i is %d\n", &i);
    printf("The address of a is %d\n\n", a); // address of a or i
    printf("The value of a is %u\n", a);
    a++; // increment to 1st position (4 bytes of int data type)

    a++; // increment to 2st position (4 bytes of int data type)

    printf("The value of a after increment is %u\n\n", a);

    a--; // decrement to 1st position again (4 bytes of int data type)

    printf("The value of a after decrement is %u\n\n", a);

    char c = 1;   // memory is of char data type
    char *b = &c; // *b is storing the adderss of c

    printf("The value of b is %u\n", b);

    b++; // increment to 1st position (1 bytes of char data type)

    printf("The value of b after increment is %u\n\n", b);

    float d = 1;   // memory is of float data type
    float *e = &d; // *e is storing the adderss of d
    
    printf("The value of e is %u\n", e);

    e++; // increment to 1st position (4 bytes of float data type)

    printf("The value of e after increment is %u\n\n", e);

    return 0;
}