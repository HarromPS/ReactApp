#include <stdio.h>
void encrypt(char *st)
{
    char *ptr = st;     
    while (*ptr != '\0')    // runs until loop encounters a null character
    {
        *ptr = *ptr + 1;    // ptr changes to next character ascii value
        ptr++;
    } 
}

int main()
{
    // Q6 Write a program to encrypt a string by adding 1 to the ASCII
    // value of its character

    char st[] = "Hello World";
    encrypt(st);
    printf("\nThe encrypted string is %s\n", st);

    return 0;
}