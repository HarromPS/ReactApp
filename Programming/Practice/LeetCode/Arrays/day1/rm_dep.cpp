#include <iostream>
#include <cstdio>
#include <vector>
#include<algorithm>
using namespace std;

int removeDuplicates(vector<int> &nums, int val)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            count++;
            // assigining highest value to the target value
            nums[i] = 1000;
        }
    }
    sort(nums.begin(), nums.end());
    return nums.size() - count;
}
int main()
{
    // [1,1,2]
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    printf("%d \n", removeDuplicates(nums, 3));
    printf("\n");
    //    size = sizeof(nums) / sizeof(int);

    for (int i = 0; i < nums.size(); i++)
    {
        printf("%d ", nums[i]);
    }
    // Input: nums = [0,0,1,1,1,2,2,3,3,4]
    // Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
    return 0;
}