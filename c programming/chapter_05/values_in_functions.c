#include <stdio.h>
// eg. sum is a function which takes a and b as
// input and returns an integer a an output

int sum(int a, int b); // function prototype declaration i.e just prototype

int main()
{

    int a;

    a = sum(7, 5); // function call
  
    printf("The value of sum %d\n", a);
    return 0;
}
int sum(int a, int b)
{
    
    int result;
    result = a + b;
    return result;
}