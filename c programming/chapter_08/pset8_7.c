#include <stdio.h>
#include<string.h>

void decrypt(char *st)
{
    char *ptr = st;
    while (*ptr != '\0') // runs until loop encounters a null character
    {
        *ptr = *ptr - 1; // ptr changes to previous character ascii value
        ptr++;
    }
}

int main()
{

    // Q7 Write a program to decrypt a string encrypted
    // by adding 1 to the ASCII value of its character

    char st[] = "Ifmmp!Xpsme";
    decrypt(st);
    printf("The decrypted string is %s\n", st);

    return 0;
}