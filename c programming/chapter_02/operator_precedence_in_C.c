#include <stdio.h>

int main()
{

    // in C language the compiler do not follows the BODMAS rule
    // it solves by operator priority
    // also there are more operators

    int a = 10;
    int b = 20;
    printf("The value of a*3+b*6=%d", a * 3 + b * 6);

    // the value of a*3+b*6 is 150, the compiler solved the problem by
    //  applying braces i.e. (a*b)+(b*6)

    // the priority for operators in c is '*' , '/' , '%' > '+' , '-' > '='

    // operator asssociativity --> when same priority operators are present in the equation
    //like * and / have same priority
    //so for the expression x*y/z --> there is a tie betn * and /
    //then => (x*y)/z
    //also for x/y*z => (x/y)*z


    return 0;
}