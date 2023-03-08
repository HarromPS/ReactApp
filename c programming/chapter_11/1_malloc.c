#include <stdio.h>
#include <stdlib.h>

int main()  // dynamic memory allocation
{
    int *ptr;

    // allocating a random memory of 6 integers * size of 1 integer in bytes
    // ptr=malloc(6 * sizeof(int));
    // and we will get its void pointer
    // malloc returns a void pointer
    // so we need to type cast it i.e

    //SYNTAX:   * in malloc
    
    ptr = (int *)malloc(6 * sizeof(int));

    // type cast    6=space for 6 int   size of 1 int

    // now can be used as an array

    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i + 1, ptr[i]);
    }
    free(ptr);

    return 0;
}