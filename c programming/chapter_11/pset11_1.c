#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Q1 Write a program to dymnamically create an array of size
    //  capable of storing 6 integers

    int *ptr;
    // creating a dynamic memory uing malloc()
    ptr = (int *)malloc(6 * sizeof(int));

    // creating an array capable of storing 6 integers in dynamic manner
     for (int i = 0; i < 6; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
    }

    return 0;
}