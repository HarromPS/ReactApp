
#include <stdio.h>
void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b; // *sum is storing value of (a+b)
    *avg = (float)*sum / 2; // *avg is storing value of (a+b)/2 i.e *sum/2
}
int main()
{
    // Q4 Write a program using a function which calculates
    // the sum and average of two numbers.
    // Use pointers and print the values of sum and
    // average in main()

    int a, b, sum;
    float avg;

    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);                         // getting values of a and b from the user
    sumAndavg(a, b, &sum, &avg);                   // function call
    printf("The sum of two numbers is %d\n", sum); // &sum= value of *sum
    printf("The avg of two numbers is %f\n", avg); // &avg = value of *avg

    return 0;
}
