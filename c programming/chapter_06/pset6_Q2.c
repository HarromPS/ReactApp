#include <stdio.h>
void print(int a)
{

    printf("The address of a is %u\n", &a);
}

int main()
{

    // Q2 Write a program having a variable i.
    // Print the address of i .
    // Pass this variable to a function and print its address
    // Are these addersses same ? Why ?

    int i = 5;
    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", &i);

    print(i); // only the copy of i is called
              // thats why different values are printed

    return 0;
}
