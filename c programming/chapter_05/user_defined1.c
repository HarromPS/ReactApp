#include <stdio.h>
float findarea(); // function declaration
                  // function with no parameters

int main()
{               // FUNCTIONS WITH NO PARAMETERS
    findarea(); // function calling

    return 0;
}
// function to find the area of rectangle

float findarea()
{ // function ddfination
    float length, width ;
    printf("Enter the value of length and width\n");
    scanf("%f%f", &length, &width);
    float area = (length * width);
    printf("The area of the rectangle is %f\n", area);
}