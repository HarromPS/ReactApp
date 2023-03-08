#include <stdio.h>
int pattern(n); // function declaration

int main()
{
    // Q7 Write a program using functions to print the
    // following pattern (first n lines)
    // *
    // * * *
    // * * * * *

    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    pattern(n); // function calling

    return 0;
}
int pattern(n) // function defination
{              // 1-1

    if (n == 1)
    {
        printf("*\n");
        return 0;

    } // 2-2
    pattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");

    } // 3-5 i.e (2n-1)

    printf(" \n");
}