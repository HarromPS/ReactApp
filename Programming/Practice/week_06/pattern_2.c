#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Printing the pattern of
/*
row = (2 * n -1)
+               // row 0
+ +             // row 1
+ + +           // row 2
+ + + +         // row 3
+ + + + +       // row 4 n=5
+ + + +         // row 5
+ + +           // row 6
+ +             // row 7
+               // row 8
*/
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int row, col;
    for (row = 0; row < (2 * n ); row++)
    {
        if (row > (n))
        {
            col = (2 * n ) - row;
        }
        else
        {
            col = row;
        }
        for (int j = 0; j < col; j++)
        {
            printf("& ");
        }
        printf("\n");
    }
    int i, j;
    return 0;
}