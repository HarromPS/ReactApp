#include <stdio.h>
// Globally declaring initial value of the sum
int j=1;

// WAP to find the sum of 'n' natural numbers using recursion

int sum(int* i,int* limit)
{
    if (j > *limit)
    {
        return 0;
    }
    else
    {
        *i = *i + j;
        j++;
        return sum(i,limit);
    }
}
int main()
{
    int limit,i=0;
    printf("Enter the last number of your sum\n==>");
    scanf("%d", &limit);
    printf("The sum upto %d integers is \n==>", limit);
    sum(&i,&limit);
    printf("%d ", i);
    return 0;
}