#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>

// CL Practical: 09
// Q2
int getint(char str[])
{
    int integer;
    sscanf(str,"%d",&integer);
    return integer;
}
int main()
{
    printf("Enter a string: ");
    char str[20];
    scanf("%s",str);
    int r=getint(str);
    printf("The string is: %d",r);
    return 0;
}