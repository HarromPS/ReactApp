#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Sometimes the dynamiclly memory is insufficiet or more than required

    // realloc is used to re-allocate memor o a new size using previous pointer an its size

    // SYNTAX:
    //    ptr=realloc(ptr,newsize);
    //   e.g  ptr =realloc(ptr, 3*sizeof(int));

    int *ptr;

    // SYNTAX:
    ptr =(int*)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is:%d\n", i + 1, ptr[i]);
    }

    // Reallocating the size of the memory 
    ptr=realloc(ptr,10*sizeof(int));
    // Now I can store 10 integers at random locations

     for (int i = 0; i < 10; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is:%d\n", i + 1, ptr[i]);
    }
    return 0;
}

