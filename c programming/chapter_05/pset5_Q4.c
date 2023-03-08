#include <stdio.h>      // INCOMPLETE_CODE_DO NOT RUN_.
int fibonacci(int n);

int main() // hint: fib(n)=fib(n-1)+fib(n-2)
{
    // Q4 Write a program using recursion to calculate
    // nth element of fibonacci series

    int n;
    printf("Enter the no. of elements in your Fibonacci series\n");
    scanf("%d", &n);
    printf("Your series is now ready i.e %d \n", fibonacci(n-2));

    return 0;
}
int fibonacci(int n)
{
   
    int n1=0,n2=1,n3;
  
    if (n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
       printf("%d\n",fibonacci(n-1));
    }
}