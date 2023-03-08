#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 1,j=0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i]!=nums[j])
        {
            // nums.erase(nums.begin()+(i+1),nums.begin()+(i+2));
            nums[++j]=nums[i];
            k++;
        }
    }
     for (int i = 0; i < nums.size(); i++)
    {
        printf("%d ", nums[i]);
    }

    // cout << k << endl;
    return k;
}
int main()
{
    // [1,1,2]
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    printf("%d \n", removeDuplicates(nums));
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