#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Q3 Write a program to create an array of size
    //  capable of storing 6 integers
    // Solving the Q1 using calloc()

    int *ptr;

    // creating the continous memory using calloc()
    ptr = (int *)calloc(6, sizeof(int));

    // creating an array capable of storing 6 integers in continous manner
     for (int i = 0; i < 6; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
    }

    return 0;
}