#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Q4 Create an array dynamically capable of storing 5 integers.
    // Now use realloc() so that it can store 10 integers

    int *pt;

    // creating  a dynamic memory
    pt = (int *)calloc(5, sizeof(int));

    // creating  a dynamic memory array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element:\n", i + 1);
        scanf("%d", &pt[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The values of %d element is: %d \n", i + 1, pt[i]);
    }

    // REALLOCATING THE MEMORY USING realloc()

    pt = realloc(pt, 10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d element\n", i + 1);
        scanf("%d", &pt[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The values of %d is: %d \n", i + 1, pt[i]);
    }

    return 0;
}