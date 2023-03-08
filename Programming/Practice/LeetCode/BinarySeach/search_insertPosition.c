#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Given a sorted array of distinct integers and a target value,
// return the index if the target is found. If not, return the
// index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.
int searchInsert(int *nums, int numsSize, int target)
{
    int low=0,high=numsSize-1,mid=(high-low)/2;
    int x=0;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(target<=nums[mid])
        {
            x=mid;
            high=mid;
        }
        else if(target>nums[mid]){
            low=mid+1;
        }
    }
    return x;
}
int main()
{
    // targt value = 5 return index
    int num[] = {1, 3, 5, 6};
    int size = sizeof(num) / sizeof(int);
    printf("%d ", searchInsert(num, size, 2));

    // Input: nums = [1,3,5,6], target = 2
    // Output: 1

    // Input: nums = [1,3,5,6], target = 7
    // Output: 4
    return 0;
}