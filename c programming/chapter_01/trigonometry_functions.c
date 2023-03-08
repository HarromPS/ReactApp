#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Using trigonometric functions
// Return values are always in double, float, long double
// sin() range[-1,1], cos()range[-1,1], tan() range R always take madatory parameters

int main()
{
    double x = 1, result;       // degree in radian
    result = cos(x);        // cos (x*PI/180) angle into radian
    printf("cos(x)= %f \n", result);

    result = sin(x);
    printf("sin(x)= %f \n", result);

    result = tan(x);
    printf("tan(x)= %f \n", result);

    double xDegrees = 45;   // Angle value in radian 

    // converting degrees to radians
    x = xDegrees * (3.14159 / 180);
    result=sin(x);                 // Will the angle 45 in radian value i.e 1/sqrt(2)
    printf("sin(x)= %f \n", result);

    result=cos(x);                 // Will the angle 45 in radian value i.e 1/sqrt(2)    
    printf("cos(x)= %f \n", result);

    result=tan(x);                 // Will the angle 45 in radian value i.e 1    
    printf("tan(x)= %f \n", round(result));

    // double xDegrees1 = 45;   // Angle value in radian 

    // // converting degrees to radians
    // x = xDegrees1 * (180/3.14159);
    // result=sin(x);                 // Will the angle 45 in radian value i.e 1/sqrt(2)
    // printf("sin(x)= %f \n", result);

    // result=cos( x);                 // Will the angle 45 in radian value i.e 1/sqrt(2)    
    // printf("cos(x)= %f \n", result);

    // result=tan(x);                 // Will the angle 45 in radian value i.e 1    
    // printf("tan(x)= %f \n", round(result));


        return 0;
}