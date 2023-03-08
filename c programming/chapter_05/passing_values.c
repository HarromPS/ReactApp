#include <stdio.h>
void change(int a);

int main()
{
    int b = 322; // the is 'b' of main function
    printf("the value of before change is %d\n", b);
    change(b);

    printf("the value of b after change is %d\n", b);

    return 0;
}

void change(int b)
{
   // this 'b' is about the function prototype
    b = 144;
}