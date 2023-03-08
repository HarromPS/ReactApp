#include <stdio.h>

int main()
{

    // Q3 Write a program to change the value of a variable ten
    // time of its current value.
    // Write a function and pass the value by reference.

    // Q6 Try problem 3 using call by value and verify
    // if it doesn't change the value of the said variable

    int a = 1;
    printf("The value of a is %d\n", a);
    ten_times(&a);

    return 0;
}
void ten_times(int a) // providing address of a
                      // Q3 me 'int *a' tha, isme '*' nahi hai
{
    int value;
    value = a;
    value *= 10;
    printf("The ten time value of a is %d\n", value);

    // verified that function doesn't change the value from main()
}
