#include <stdio.h>

int main()
{

    // Q9 Write a 3D array and print the address in memory of its dimensions
    // in increasing order

    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++){
                printf("The address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
            }
        }
    }

    return 0;
}