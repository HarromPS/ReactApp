#include <stdio.h>

int main()
{

    // Q3 Write a program to create an array of 10 integers
    // and store multiplication table of 5 in it
    // making a table of 5

    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 5 * (i + 1);
        printf("The table of 5 = %d X %d\n", i + 1, mul[i]);
    }

    // same code but it takes value from the user

    int mul2[10], n;
    printf("Enter a number to generate a table\n");
    scanf("%d", &n);
    for (int j = 0; j < 10; j++)
    {

        mul2[j] = n * (j + 1);
        printf("The table of %d X %d\n", n, mul2[j]);
    }
    return 0;
}