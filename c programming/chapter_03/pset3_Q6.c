#include <stdio.h>

int main()
{

    // Q6 Write a program to find greatest of four numbers entered by the user

    float num1, num2, num3, num4;
    printf("Enter any four numbers\n");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        float num = num1;
        printf("The greatest among the four numbers is %f", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        float num = num2;
        printf("The greatest among the four numbers is %f", num);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        float num = num3;
        printf("The greatest among the four numbers is %f", num);
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3)
    {
        float num = num4;
        printf("The greatest among the four numbers is %f", num);
    }
    else
    {
        printf("Enter different numbers");
    }

    return 0;
}