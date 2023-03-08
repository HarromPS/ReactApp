#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// CL Practical: 09
// Q1
void xgets(char *str)
{
    scanf("%[^\n]s",str);
}
void xputs(char *str)
{
    printf("The string entered: %s",str);
}
int main()
{
    printf("Enter a string: ");
    char str[20];
    xgets(str);
    xputs(str);
    return 0;
}