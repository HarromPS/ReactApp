#include <stdio.h>

int main()
{
    // write a program to find the volume of a cylinder

    float r,h ,o,pi=3.142;
    printf("What is the radius of your cylinder ?\n");
    scanf("%f", &r);
    printf("What is the height of your cylinder ?\n");
    scanf("%f",&h);
    o=(3.142857 * h * r * r);
    printf("The volume of your cylinder is  %f \n", o);

    return 0;
}
