#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Cl practical 07: Arrays with pointers & Functions
/*01) Write a program to obtain transpose of a 4 x 4 matrix.
The transpose of a matrix is obtained by exchanging the elements of each row
 with the elements of the corresponding column.*/

int Transpose(int arr[][4])
{
    // formula A(ij)=T[ji]

    int temp[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j]=temp[j][i];
        }
    }
   
}

int main()
{
    int matrix_array[4][4];
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d row \n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix_array[i][j]);
        }
    }
    printf("Elements Before Transpose\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix_array[i][j]);
        }
        printf("\n");
    }

    Transpose(matrix_array);
    printf("Elements After Transpose\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
