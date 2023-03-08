#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a program to create a dynamic array of 5 float 
    // using malloc()
    int *ptr;

    // SYNTAX:
    ptr = (float *)malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is:%d\n", i + 1, ptr[i]);
    }
    return 0;
}