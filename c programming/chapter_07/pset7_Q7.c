#include <stdio.h>
void multable(int *mul, int your_num, int n)
{
    for (int i = 0; i < n; i++)
    {
        mul[i] = 2 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d =%d\n", your_num, i + 1, mul[i]);

        
    }
    printf("_____________________\n\n");
}

int main()
{

    // Q7.  create an aray of size 3*10 containing multiplication tables
    //  of the numbers 2,7 and 9 respectively

    int mul[3][10];
    multable(mul[0], 2, 10); // [0] --> 1st element of array mul
                         // num =2 , upto 10
    multable(mul[1], 7, 10);
    multable(mul[2], 9, 10);

                return 0;
}