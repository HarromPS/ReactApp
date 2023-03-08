#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= (n - 1 - i))
            {
                printf("%d", (n - j));
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j >= n && j<(n+i))
            {
                printf("%d", j - n + 2);
            }
        }
        printf("\n");
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<2*n-1;j++){
    //         if(j>=n-1){
    //             printf("%d ",j-n+2);
    //         }
    //         if(j<n)
    //         {

    //         }
    //         // printf("* ");
    //     }
    //     printf("\n");
    // }
    return 0;
}