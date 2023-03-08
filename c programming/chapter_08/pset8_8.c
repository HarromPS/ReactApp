#include <stdio.h>
int count(char str[], char c)
{
    char *ptr=str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    // Q8 Write a program to count the occurance of a character in a string

    char str[20] = "Hello World";
    int a = count(str, 'l');
    printf("The occurance is %d\n", a);

    return 0;
}