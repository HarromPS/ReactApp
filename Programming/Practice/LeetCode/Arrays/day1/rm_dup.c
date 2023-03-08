#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int removeElement(int *nums, int numsSize, int val)
{
    if (numsSize == 0)
    {
        return numsSize;
    }
    // else if (numsSize != 0)
    // {
    //     if (nums)
    //         return numsSize;
    // }
    int count = 0, lastminus1 = numsSize - 2, temp = 0;
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == val)
        {
            temp = nums[i];
            nums[i] = nums[lastminus1];
            // nums[i]=nums[i+1];
            lastminus1--;

            count++;
        }
    }
    if (nums[numsSize - 1] == val)
    {
        nums[numsSize - 1] = nums[numsSize - 2];
        count++;
    }
    return numsSize - count;
}
// heap buffer memory when input is {1} & val=1
// else works fine
int main()
{
    int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int size = sizeof(nums) / sizeof(int);
    printf("%d\n", removeElement(nums, size, 2));
    // printf("%d\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    // nums.clear();
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}