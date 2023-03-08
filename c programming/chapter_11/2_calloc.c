#include<stdio.h>
#include<stdlib.h>

int main()  // calloc() continous allocation

    // calloc function initializes each block of memory 
    // with the value of zero '0'
{
    int *ptr;

    // allocating a continous memory of 
    //6 integers * size of 1 integer in bytes
    // ptr=calloc(6 * sizeof(int));
    

    //SYNTAX:   // "," in calloc
    
    ptr = (int *)calloc(6 ,sizeof(int));
    // takes two arguments, size of memory to be allocated * size of datatype
    // and initializes each element equals zero '0'
    
    // type cast    6=space for 6 int   size of 1 int

    // now can be used as an array

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter %d element\n", i + 1);
    //     scanf("%d", &ptr[i]);
    // }

    for (int i = 0; i < 6; i++)  // all are initially zero
    {
        printf("The value of %d element is: %d\n", i + 1, ptr[i]);
    }

    free(ptr);

    return 0;
}