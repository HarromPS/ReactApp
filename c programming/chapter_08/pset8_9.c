#include <stdio.h>
int count(char str[], char c)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("Yes it is present\n");
            count++;
        }
       
        ptr++;
    }
    
    return count;
}
// Q9 Write a program to check whether a given character
// is present in a string or not

int main()
{
  
    char str[20] = "Hello World";
    int a = count(str, 'l');
    printf("and the occurance is %d\n", a);

    return 0;
}
