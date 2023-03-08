#include <stdio.h>
float findarea(float length, float width);

// function declaration
// with parameters and return value

int main()
{
    // FUNCTION WITH RETURN VALUE AND RETURN VALUE

    float length, width;
    printf("Enter the value of length and width\n");
    scanf("%f%f", &length, &width);
    float result;
    result = findarea(length,width);    // function calling
    printf("Area = %f\n", result);

    return 0;
}
float findarea(float length, float width)
{

    float area;
    area = length * width;
    return area; // Return statement
}