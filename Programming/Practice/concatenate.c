#include <stdio.h>
#include <stdlib.h>

// WAP to concatenate two arrays

int main()
{
    int n;
    printf("Enter the size of your array\n");
    scanf("%d", &n);
    int nums[n];
    int ans[2 * n];

    for (int i = 0; i < n; i++)
    {
        printf("%d==> ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < (2 * n); i++)
    {
        if (i >= n) // 3==3
        {
            ans[i] = nums[i - n]; // arr[3]=num[3-3];
        }
        else
        {
            ans[i] = nums[i];
        }
    }

    // OR below formula will also work

    // for(int i=0;i<n;i++)
    // {
    //     ans[i]=nums[i];
    // }

    // for(int i=n;i<(2*n);i++)
    // {
    //     ans[i]=nums[i-n];
    // }

    printf("The concatenation of two array is: [");
    for (int i = 0; i < (2 * n); i++)
    {
        printf("%d", ans[i]);
        if (i != (2 * n) - 1)
        {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}