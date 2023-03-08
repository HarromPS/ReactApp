#include <stdio.h>

int main()
{

    // Q2 Write a program to take string as an input from the user
    // using %c & %s. Confirm that the two input strings are equal

    char string[50];
    printf("Enter a string\n");
    scanf("%s", string);
    

    char s2;
    int i = 0;
    printf("Enter 2nd string\n", s2);

    while (i < '\0')
    {

        scanf("%c", &s2);
        fflush(stdin);
        i++;
    }
    printf("The value of srting is %s\n", s2);

    printf("The string is %s\n", string);

    return 0;
}