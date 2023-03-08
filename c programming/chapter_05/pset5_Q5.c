#include <stdio.h>

int main()
{
    // Q5 What will the following line produce in a C program

    int a = 3;
    // try to think of the output before running this program

    // If your output is 3 4 4, then think again
    printf("%d %d %d \n", a, ++a, a++);
    // you are thinking that your aurguments are passing left to right
    // but when you pass arguments in printf
    // then they pass left to right

    // i.e a++ = 5 ; ++a = 5 ; a = 3

    return 0;
}