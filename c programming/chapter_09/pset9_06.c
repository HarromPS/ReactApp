#include <stdio.h>
typedef struct complex
{
    int real;
    int img;
} ri;

void display(ri c)  // c represents array
{
    printf("Real part %d and imaginary part %d\n", c.real, c.img);
}

int main()
{
    // Q6 Create an array of complex numbers created in problem 5 and display
    // by a display user defined function. Take the input from the user

    ri arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the real part for the %d num\n", i + 1);
        scanf("%d", &arr[i].real);

        printf("Enter the imaginary part for the %d num\n", i + 1);
        scanf("%d", &arr[i].img);
    }

    for (int i = 0; i < 3; i++)
    {
        display(arr[i]); // display function
    }

    return 0;
}