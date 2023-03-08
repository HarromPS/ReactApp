#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Decimal to binary conversion
int main()
{
    int rem[10];
    int n = 11, i = 0;
    int x=n;
    while (n != 0)
    {
        rem[i] = n % 2;
        n = n / 2;
        i++;
    }
    int temp=0;
    for (int j =0; j<(i/2); j++)
    {
        temp=rem[j];
        rem[j]=rem[i-j-1];
        rem[i-j-1]=temp;
    }
    printf("The Binary conversion of %d is: \n==>",x);
    for (int j = 0; j < i; j++)
    {
        printf("%d ",rem[j]);
    }
    // for (int j = i - 1; j >= 0; j--)
    // {
    //     // rem[j]=rem[4-j-1];
    //     printf("%d ", rem[j]);
    // }
    return 0;
}