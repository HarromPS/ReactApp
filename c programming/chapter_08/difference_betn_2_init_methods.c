#include <stdio.h>

int main()
{
    // difference between two initialization methods

    char *ptr = "Hello";
    ptr = "World";       // re-initialized
    printf("%s\n", ptr); // ptr

    return 0;
}