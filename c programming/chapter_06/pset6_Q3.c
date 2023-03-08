#include <stdio.h>
void ten_times(int *a);

int main()
{

    // Q3 Write a program to change the value of a variable ten
    // time of its current value.
    // Write a function and pass the value by reference.

    int a = 1;
    printf("The value of a is %d\n", a);
    ten_times(&a);
   

    return 0;
}
void ten_times(int *a)
{
    int value;
    value = *a ;
    value*=10;
  printf("The ten time value of a is %d\n",value);
}