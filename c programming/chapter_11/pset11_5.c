#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Q5 Create an array of multiplication table of 7 upto 10(7X10)
    //  Use realloc() to store 15 numbers from(7X1 to 7X15)

    int *abc;

    // Creating an contionous memory using calloc()
    abc = (int *)calloc(10, sizeof(int));

    // int n;

    // storing it in array

    // printing the table
    for (int j = 0; j < 10; j++)
    {
        abc[j] = 7 * (j + 1);
        printf("7 X %d=%d\n", j + 1, abc[j]);
    }

    // reallocating memory using realloc()
    abc=realloc(abc,15*sizeof(int));

    printf("\nThe new table is:\n");
     for (int j = 0; j < 15; j++)
    {
        abc[j] = 7 * (j + 1);
        printf("7 X %d=%d\n", j + 1, abc[j]);
    }

    return 0;
}