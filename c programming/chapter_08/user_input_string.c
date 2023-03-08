#include <stdio.h>

int main()
{
    // taking user input in scanf using %s

    char st[34]; // st is already an adderss
    printf("Enter a string\n");
    scanf("%s", st); // st takes input, no &st is required
                     // scanf automatically add a null character to string
    printf("Your entered string is %s\n", st);


    return 0;
}