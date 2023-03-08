#include <stdio.h>

int main()
{
    // write a program to find the area of a circle

    int r;
    printf("What is the radius of your circle ?\n");
    scanf("%d", &r);
    float area = 2 * 3.142 * r;
    printf("The area of your circle is %f\n", area);

    return 0;
}