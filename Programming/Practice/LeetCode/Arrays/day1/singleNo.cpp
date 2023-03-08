#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int singleNumber(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return nums[0];
    }
    sort(nums.begin(), nums.end());
    int i = 0, x = 0;
    while (i < nums.size() - 1)
    {
        if (nums[i] != nums[i + 1])
        {
            x = nums[i];
            break;
        }
        i = i + 2;
    }
    if (nums.size() % 2 != 0)
    {
        if (nums[nums.size() - 1] != nums[nums.size() - 2])
        {
            x = nums[nums.size() - 1];
        }
    }
    return x;
}

int main()
{
    vector<int> vec1 = {13, 20, 17, 20, 16, 21, 19, 21, 17, 13, 16};
    sort(vec1.begin(), vec1.end());
    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     cout << vec1[i] << " ";
    // }
    // int r = singleNumber(vec1);
    // cout<<"\n"<<r<<endl;
    int a=2;
    int b=2;
    int c=1;
    c^=a^b;
    cout<<c<<endl;
     return 0;
}