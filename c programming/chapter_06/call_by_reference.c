#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main() // CALL BY REFERENCE
           // in 'call by value' address ki value pass hoti hai
{

    int a = 7, b = 9;
    printf("The value of a and b is %d and %d", a, b);
    wrong_swap(a, b);
    // wrong_swap will not work due to call by value
    printf("\nThe value of a and b before swapping is %d and %d\n", a, b);

    swap(&a, &b); // will work due to call by reference

    // swap will accept the addresses of a,b

    // the addersses are then converted into values

    // by using the (*) operator

    printf("The value of a and b after swapping is %d and %d\n ", a, b);

    return 0;
}
void wrong_swap(int a, int b) // copy of a and b is here
{                             // call by value
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b) // receive the address of a and b when called
                          // i.e swap(&a,&b)
                          // *a, *b gets the value of a and b
                          // and is able to change the value of main()

{
    int temp2;
    temp2 = *a; // swap will accept the addresses of a,b
                // the addersses are then converted into values
                // by using the (*) operator

    *a = *b;    // &a is the address
    *b = temp2; // (*) operator --> value at address
}
