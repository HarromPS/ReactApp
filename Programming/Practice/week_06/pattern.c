#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i, j, x = i, y = (2*n-1);
    for (i = 0; i < (2 * n - 1); i++)
    {
        for (j = i; j < (2 * n - 1); j++)
        {
            if(i==0 || i==(2*n-1))
            {
                printf("%d ",n);
            }
            else{
                printf("%d ",y);
                
            }
            // if (j > 0 && j < (2 * n - 1))
            // {
            //     printf("%d ", x);
            //     x--;
            // }
            // else
            // {
            //     printf("%d ", n);
            // }
        }
        printf("\n");
    }
    return 0;
}