#include <stdio.h>
#include <stdlib.h>

int main()
{
        // Write a program to create a dynamic array of size n
        // using calloc() where is an integer entered by user

    int *ptr;
    int n;
    printf("Enter the size of your array\n");
    scanf("%d",&n);

    // SYNTAX:
    ptr = (int *)calloc(n, sizeof(int));

     for (int i = 0; i < n; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    free(ptr);
    for (int i = 0; i < n; i++) // all are initially zero
    {
        printf("The value of %d element is: %d\n", i + 1, ptr[i]);
    }

    return 0;
}