#include <stdio.h>
int factorial(int x);

int main()
// recursion --> function calls itself
{
    int a;
    printf("Enter value to get the factorial\n");
    scanf("%d", &a);
    printf("The value of %d factorial is %d\n", a, factorial(a));

    return 0;
}

int factorial(int x)    // Defining the Function
{
    // ex. x=4 --> x!= 4 nor 0
    // so returns 4*factorial(4-1)          --> 4*(4-1)
    // now factorial is 4*factorial(3)      --> 4*3*(3-1)
    // again not 1 nor 0, so returns        --> 4*3*2(2-1)
    // 3*factorial (3-1).... 3*(2!)         --> 4*3*2*1*(1-1)
    // when reaches to 1, it returns 1      --> 4*3*2*1*0! --> 4*3*2*1*1

    printf("Calling factorial %d\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }

    else
    {
        return factorial(x - 1) * x;
    }
}