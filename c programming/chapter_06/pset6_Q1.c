#include <stdio.h>

int main()
{

    // Q1 Write a program to print the value of a variable.
    // Use this address to get the value of this variable

    int a = 10;

    printf("the value of a is %d\n", a);
    printf("The address of a is %d\n", &a);

    int *b;
    b = &a;
    printf("the value of b is %d\n", *b); // reverse

    return 0;
}
