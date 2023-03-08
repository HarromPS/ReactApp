#include <stdio.h>
float findarea();

// function declaration
// with parameters and return value

int main()
{
    // FUNCTION WITH RETURN VALUE AND RETURN VALUE

    float result;
    result = findarea();    // function calling
    printf("Area = %f\n", result);

    return 0;
}
float findarea()
{

    float length, width;
    printf("Enter the value of length and width\n");
    scanf("%f%f", &length, &width);
    float area;
    area = length * width;
    return area; // Return statement
}