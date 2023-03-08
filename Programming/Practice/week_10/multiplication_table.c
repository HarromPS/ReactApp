#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Multiplication table of a user input number
void table(int num);
int table1(int num, int i);
int main()
{
    printf("Enter a number whose table is to be printed\n==>");
    int num;
    scanf("%d", &num);
    printf("The table of %d is ::\n", num);
    // for(int i=0;i<10;i++)
    // {
    //     printf("%d X %d = %d\n",num,i+1,(i+1)*num);
    // }
    // for(int i=1;i<=10;i++)
    // {
    //     printf("%d X %d = %d\n",num,i,(i)*num);
    // }
    // for(int i=1;i<11;i++)
    // {
    //     printf("%d X %d = %d\n",num,i,i*num);
    // }
    // table(num);
    for (int i = 0; i < 10; i++)
    {
        table1(num, i);
    }
    return 0;
}
void table(int num)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, (i + 1) * num);
    }
}
// Using recursion
int table1(int num, int i)
{
    if (i > 10)
    {
        return 0;
    }
    else
    {
        ++i;
        printf("%d X %d = %d\n", num, i, (i)*num);

        return (num, i);
    }
}