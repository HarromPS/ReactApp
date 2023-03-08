#include <stdio.h>

int main()
{

    char str[] = {'a', 'a', 'a', 'a', 'a', 'a', '\0'};
    // or
    char str2[10] = "ABCD";

    char *ptr=str2;
    printf("%s\n",ptr);    // %s to print the string
    return 0;
}