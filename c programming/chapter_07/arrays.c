#include <stdio.h>

int main()
{

    // Naive (innocent) way to create list
    // int mark1, mark2, mark3, mark4;
    // mark1=40;
    // mark2=76;
    // mark3=82;
    // mark4=48;

    // By using arrays we can easily
    // make out the listing of elements

    int marks[10]; // allocates/reserves space for 4 integers
    marks[0] = 92; // especicially in C language index starts from '0'

    marks[1] = 40;
    marks[2] = 76;
    marks[3] = 82;
    marks[4] = 48;

    printf("Value of marks %d\n", marks[0]);
    printf("Value of marks %d\n", marks[1]);
    printf("Value of marks %d\n", marks[2]);
    printf("Value of marks %d\n", marks[3]);
    printf("Value of marks %d\n", marks[4]);

    printf("Enter a value for marks 5 \n");

    scanf("%d", &marks[5]);

    printf("Value of marks %d\n", marks[5]);

    return 0;
}