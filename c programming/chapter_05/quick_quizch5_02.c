#include <stdio.h>
#include <math.h> // this is a math library function

int main()
{
    // use the library functions to calculate the area
    // of a square with side a

    int side;
    printf("Enter the side of the square\n");
    scanf("%d", &side);
    printf("The value of the area of the square is %f\n", pow(side, 2));

    return 0;
}
