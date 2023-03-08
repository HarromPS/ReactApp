#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Pattern
/*
* 
* *
* * *
* * * *
*/
int main()
{
    int n=5;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}