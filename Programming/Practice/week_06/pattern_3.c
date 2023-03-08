#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int row, col;
    // Pattern 2
    // for (row = 0; row < n; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         printf("& ");
    //     }
    //     printf("\n");
    // }

    // // Pattern 3
    // for (row = 0; row < n; row++)
    // {
    //     int j=n-row;
    //     for (col =0 ;col<j;col++)
    //     {
    //         printf("& ");
    //     }
    //     printf("\n");
    // }
    // // Pattern 4
    // for (row = 1; row <= n; row++)
    // {
    //     for (col =1 ;col<=row;col++)
    //     {
    //         printf("%d ",col);
    //     }
    //     printf("\n");
    // }
    // // Pattern 5
    // for (row = 0; row < n; row++)
    // {
    //     int x=n-row;
    //     for (col = 0; col <= n; col++)
    //     {
    //         if(col<x)
    //         {
    //             printf(" ");
    //         }
    //         else
    //         {
    //             printf("$ ");
    //         }
    //     }
    //     printf("\n");
    // }
    // // Pattern 6
    // for (row = 0; row < n; row++)
    // {
    //     int x=n-row;
    //     for (col =n; col >0; col--)
    //     {
    //         if(col>x)
    //         {
    //             printf(" ");
    //         }
    //         else
    //         {
    //             printf("$ ");
    //         }
    //     }
    //     printf("\n");
    // }
    // // Pattern 7
    // for (row = 0; row <=n; row++)
    // {
    //     int x=n-row;    // e.g x=5-1= 4
    //     for (col =0; col <n; col++)
    //     {
    //         if(col>=x)
    //         {
    //             if(row==n && col==n-1){
    //                 printf("A ");
    //             }
    //             else{
    //             printf("* ");
    //             }
    //         }
    //         else
    //         {
    //             printf(". ");
    //         }
    //     }
    //     printf("\n");
    // }
    // // Pattern 8
    // for (row = 0; row <= n; row++)
    // {
    //     int x = n - row; // e.g x=5-1= 4
    //     for (col = 0; col < n; col++)
    //     {
    //         if (col >= x)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf(". ");
    //         }
    //     }
    //     printf("\n");
    // }
    // // Pattern 9
    // for (row = 0; row < n; row++)
    // {
    //     for (col=n; col >0; col--)
    //     {
    //         if (col<=n-row)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
            
    //     }
    //     printf("\n");
    // }
    // // Pattern 10
    // for (row = 0; row <(2*n-1); row++)
    // {
    //     if(row<n)
    //     {
    //         col=n-row;
    //     }
    //     else{
    //         col=(row-n)+2;
    //     }
    //     for (col;col>0;col--)
    //     {
    //         printf("* ");
            
    //     }
    //     printf("\n");
    // }
    // Pattern 11
    int x=0;
    for (row = 0; row <(2*n-1); row++)
    {
        if(row>n){
            x=n-row;
        }
        else{
            x=row-n+1;
        }
        for (col=0;col<n;col++)
        {
            if(row<n){
                if(col<x)
                {
                    printf(" ");
                }
                else{
                    printf("* ");
                }
            }
            else{
                if(col<x)
                {
                    printf(" ");
                }
                else{
                    printf("* ");
                }
                
            }
            
        }
        printf("\n");
    }
    return 0;
}