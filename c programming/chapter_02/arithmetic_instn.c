#include <stdio.h>
#include <math.h> //include this library to use special math functions

int main()
{
    int a = 4, b = 6, z = b * a;
    // int a,b=a-; is illgal
    printf("The value of z=%d\n", z);
    printf("The value of a+b=%d\n", a + b);
    printf("The value of a-b=%d\n", a - b);
    printf("The value of a/b=%d\n", a / b);
    printf("The value of a*b=%d\n", a * b);

    // do not assume operator to be present already
    // printf("%d",(4)(5)); --> this is not proper multiplication
    printf("4*5=%d\n", (5) * (4));

    // There is no operand to perform exponentiation in C
    // printf("value of 4^5=%d",4^5); //4^5 is not 1, it is 1024

    printf("The value of 4 to the power 5 =%f\n", pow(4, 5));
    /*here pow(4,5) is power function to do the operation of 4 to the power 5
        ,also, we have to use %f because it stores value of double
    */

    printf("value of 6+6.5=%d\n", 6 + 6.5);     // int + float for %d is int
    printf("value of 6+6.5=%f\n", 6 + 6.5);     // int + float for %f is float
    printf("value of 6.5+6.5=%f\n", 6.5 + 6.5); // float + float  for %f is float
    printf("value of 6.6+6.5=%d\n", 6.6 + 6.5); // float + float for %d is int

    printf("value of 3.0/9=%d\n", 3/9);//is in int
    printf("value of 3.0/9=%f\n", 3.0/9);//is in float

    return 0;
}
