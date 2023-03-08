#include <stdio.h>

// CL Practical 05:
// Q3. Write a recursive function to obtain first 25 numbers of
// Fibinacci sequence 0 1 1 2 3 5 8 13...

int fib(int m)
{
    if (m == 0 || m == 1)
    {
        return m;
    }
    else
    {
        return fib(m - 1) + fib(m - 2);
    }
}
int main()
{
    int m = 0;
    int num;
    printf("Enter a number to find fibonacci series: \n");
    scanf("%d", &num);
    printf("The fibonacci sequence upto %d is==>\n", num);
    for(int i=0;i<num;i++)
    {
        printf("%d ",fib(m));
        m+=1;
    }

    return 0;
}