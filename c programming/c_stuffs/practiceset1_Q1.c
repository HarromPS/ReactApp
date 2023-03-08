#include <stdio.h>

int main()
{
    /*write a C program to take input
     from user and find area of rectangle */

    int a, b;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&a);
    
    printf("Enter the breadth of the rectangle \n");
    scanf("%d",&b);

    printf("Area of the rectangle is %d\n",a*b);

    return 0;
}