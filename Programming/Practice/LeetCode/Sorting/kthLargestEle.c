#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// O(n)
int findKthLargest(int *nums, int numsSize, int k)
{

}
int main()
{
    int nums[]={3,2,1,5,6,4};
    int size=sizeof(nums)/sizeof(int);
    int *arr=(int*)malloc(sizeof(int));
    arr=findKthLargest(nums,size,2);
    return 0;
}