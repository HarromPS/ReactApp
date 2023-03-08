#include <iostream>
#include <cstdio>
using namespace std;

int removeDuplicates(int *nums, int numsSize)
{
    int k = numsSize, i;
    for (i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            // nums[k] = nums[i];
            k--;
            for(int j=i+1;j<numsSize;j++)
            {
                nums[j]=nums[j+1];
            }
        }
        // else
        // {
        //     arr[i] = nums[i];
        // }
    }
    // k--;
    // nums[numsSize];
    // int size = sizeof(arr) / sizeof(int);
    // int j=0;
    // for (int i = 0; i <numsSize; i++)
    // {

    //     printf("%d ", nums[i]);
    // }
    // printf("\n");
    // nums[k] = nums[numsSize];

    return k;
}
int main()
{
    // [1,1,2]
    int nums[] = {1, 1, 2};
    int size = sizeof(nums) / sizeof(int);
    printf("%d \n", removeDuplicates(nums, size));
    printf("\n");
//    size = sizeof(nums) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    // Input: nums = [0,0,1,1,1,2,2,3,3,4]
    // Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
    return 0;
}