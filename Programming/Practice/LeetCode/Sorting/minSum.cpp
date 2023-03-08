#include <iostream>
#include <cstdio>
using namespace std;

int *smallerNumbersThanCurrent(int *nums, int numsSize)
{
    // *returnSize=numsSize;
    int *arr = (int *)malloc(sizeof(int) * numsSize);
    int x = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                x++;
                arr[i] = x;
            }
            if (x == 0)
            {
                arr[i] = 0;
            }
        }
        x = 0;
        // arr;
    }
    return arr;
}
int main()
{
    int nums[] = {8, 1, 2, 2, 3};
    int size = sizeof(nums) / sizeof(int);
    int *x = (int *)malloc(sizeof(int));
    x = smallerNumbersThanCurrent(nums, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}