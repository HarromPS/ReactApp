#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the summation of the no: \n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
        printf("sum of first %d natural no is: %d\n",n,sum);
        return 0;



}