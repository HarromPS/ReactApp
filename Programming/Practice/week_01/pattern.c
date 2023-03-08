#include <stdio.h>
// PRINTING VARIOUS PATTERNS

int main()
{
    // pattern no1

    // *
    // * *
    // * * *
    // * * * *

    int n;
    printf("Enter the size of pattern 1\n i.e no of lines\n");
    scanf("%d", &n);

    // outer for loop for no of rows i.e no of lines
    // given that no. of lines = 4

    // inner for loop for no of coloumns in a particular row
    // for each increasing row no. of coloumns os also increasing

    for (int row = 1; row <= n; row++) // row = no of lines

    {
        for (int col = 1; col <= row; col++) // no. of coloumns = no. of rows
        {
            printf("* ");
        }

        printf("\n"); // start a new line
    }

    // pattern no 2
    // * * * *  row 1= 4 col
    // * * *    row 2= 3 col
    // * *      row 3= 2 col
    // *        row 4= 1 col

    int m;
    printf("Enter the size for next pattern 2\n");
    scanf("%d", &m);

    for (int rows = 1; rows <= m; rows++)
    {
        for (int colm = m; colm >= rows; colm--)
        {
            printf("* ");
        }
        printf("\n"); // start a new line
    }

    // ANOTHER INNER LOOP METHOD

    // for (int rows=1;rows<=m;rows++)
    // {
    //     for (int colm=1;colm<=(m-rows+1);colm++) =========================
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");   // start a new line
    // }

    // pattern no 3
    // printing the coloumn no
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    int k;
    printf("Enter the size for next pattern 3\n");
    scanf("%d", &k);

    for (int rows = 1; rows <= k; rows++)
    {
        for (int colm = 0; colm < rows; colm++)
        {
            printf("%d ", colm + 1);
        }
        printf("\n"); // start a new line
    }

    // pattern no 4

    // *
    // * *
    // * * *
    // * * * *
    // * * *
    // * *
    // *

    int l;
    printf("Enter the size for next pattern 4\n");
    scanf("%d", &l);

    for (int rows = 1; rows <= (2 * l) - 1; rows++)
    {
        int x;
        if (rows > l) // starts execution when 5>4
        {
            x = (2 * l) - rows;
        }
        else // upto row = 4 l==>4
        {
            x = rows;
        }

        for (int colm = 1; colm <= x; colm++)
        {
            printf("* ");
        }
        printf("\n"); // start a new line
    }

    // patten no 5
    //    *     // 3 spaces
    //   * *    // 2 space
    //  * * *   // 1 space
    // * * * *  // 0 space
    //  * * *   // 1 space
    //   * *    // 2 space
    //    *     // 3 spaces

    int v;
    printf("Enter the size for next pattern 5\n");
    scanf("%d", &v);

    for (int rows = 1; rows <= (2 * v) - 1; rows++)
    {
        int no_of_spaces, x;
        if (rows > v) // starts execution when 5>4
        {
            x = (2 * v) - rows;
        }
        else // upto row = 4 v==>4
        {
            x = rows;
        }

       no_of_spaces = v - x;

        for (int sp = 1; sp <=no_of_spaces; sp++)
        {
            printf(" ");
        }

        for (int colm = 1; colm <= x; colm++)
        {
            printf("* ");
        }
        printf("\n"); // start a new line
    }

    return 0;
}