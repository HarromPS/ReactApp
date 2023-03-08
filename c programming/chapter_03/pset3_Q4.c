#include <stdio.h>

int main()
{

    // Q5 Write a program to find whether a year enterd by the user is leap year or not.
    //  Take year as an input from the user.

    int year;
    printf("Enter a year\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Your entered year %d is a leap year", year);
    }

    else
    {
        printf("Your entered year %d is not a leap year", year);
    }
    return 0;
}