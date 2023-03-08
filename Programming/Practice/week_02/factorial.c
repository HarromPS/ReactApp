#include <stdio.h>

// WAP to print numbers from 1-100 without using loops

int display(int num)
{
    printf("%d ", num);
    if (num > 0)
    {
        if (num == 100) // if num reaches 100 it will return 0
        {
            return 0;
        }
        else
        {
            return display(num + 1); // runs like '1'>0 ==> display(1+1)==> '2'
                                     // >0 ==> display(2+1)==> '3' ... 100
        }
    }
}
int main()
{

    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int result = display(n);       // display will return 1 2 3...100
    if (result != 0)
    {
        printf("%d ", result);
    }
    return 0;
}