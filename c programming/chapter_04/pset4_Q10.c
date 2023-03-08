#include <stdio.h>

int main()
{

    // Q10 Write ap rogram to find whether a given number is a prime
    // number or not
    // loops are not the best method

    int i, n, prime = 1;
    printf("Enter a no. to check whether it is a prime no or not \n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        if (prime = 0)
        {
            printf("this is not a prime number \n");
        }
        else
        {
            printf("this is a prime number \n");
        }
    }
    return 0;
}