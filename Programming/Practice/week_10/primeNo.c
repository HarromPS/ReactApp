#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Finding a prime number

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int isPrime;
    for (int j=2;j*j<n;j++)
    {
        if(n%j==0)
        {
            isPrime=0;
        }
        else{
            isPrime=1;
        }
    }
    if(isPrime)
    {
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);

    }
    return 0;
}