#include <stdio.h>
float temperature(float c, float f);

int main()
{ // Q2 Write a Function to convert celcius to degree fahrenheit

    float c, f;
    printf("Enter your celcius temperature \n");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit is %f \n", temperature(c, f));
    return 0;
}
float temperature(float c, float f)
{
    float result = (c * 9 / 5) + 32;
    return result;
}