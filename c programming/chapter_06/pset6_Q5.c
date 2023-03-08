#include <stdio.h>

int main()
{

    // Q5 Write a program to print the value of a variable "i"
    // using "pointer to pointer" type of variable

    int i = 72, *ptr, **ptr_ptr; // k is pointer to pointer
    ptr = &i;                    //ptr is= address of i
    ptr_ptr = &ptr;              //ptr_ptr is = address of ptr
    printf("value of i %u\n", **ptr_ptr);
    printf("address of i %d\n", &i);
    printf("address of ptr %d\n", &ptr);
    printf("address of ptr_ptr %d\n \n", &ptr_ptr);

    // *ptr 'gives the value' stored in the memory at address of i
    // **ptr_ptr 'gives the value of value' of i  

    printf("value of *ptr is %d\n", *ptr);
    printf("value of **ptr_ptr is %d\n", **ptr_ptr);

    return 0;
}