#include <stdio.h>
typedef struct complex
{
    int real;
    int img;
};

int main()
{
    // Q5 Write a program with a stucture representing a complex no

    struct complex arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the real part for the %d num\n", i + 1);
        scanf("%d", &arr[i].real);

        printf("Enter the imaginary part for the %d num\n", i + 1);
        scanf("%d", &arr[i].img);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Real part %d and imaginary part %d of num %d\n", arr[i].real, arr[i].img, i + 1);
    }

    return 0;
}