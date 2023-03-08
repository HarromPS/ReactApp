#include <stdio.h>
void findarea(float length, float width); 

// function declaration
// with parameters

int main()
{
    // FUNCTIONS WITH PARAMETERS

    float length, width;
    printf("Enter the value of length and width\n");
    scanf("%f%f", &length, &width);
    findarea(length, width); // function calling

    return 0;
}
void findarea(float length, float width)
{ // function definations
    float area;
    area = length * width;
    printf("The area of the rectangle is %f\n", area);
}