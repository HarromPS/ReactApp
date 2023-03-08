#include <stdio.h>
float sum(float i, float n);

int main()
{
    // Q6 Write a recursive function to calculate the
    // sum of first n natural numbers

    float i, n;
    printf("Enter a number\n");
    scanf("%f", &n);
    float result=sum(i,n);
    printf("The sum first %.0f natural numbers is %.0f \n",n, sum(i, n));
    return 0;
}
float sum(float i, float n)

{
    float sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
  return sum;
} 
