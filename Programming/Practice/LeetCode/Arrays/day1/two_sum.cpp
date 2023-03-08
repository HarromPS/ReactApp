#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Solution
{
    public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // for(int i=0;i<nums.size();i++)
        // {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    // nums.push_back(i);
                    // nums.push_back(j);
                    return {i,j};
                }
            }

            return {};
        }
    }
    void Display(vector<int> &v)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    class Solution S;
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(11);
    vec.push_back(15);
    vector<int> x=S.twoSum(vec,9);
    cout<<x[0]<<", "<<x[1]<<endl;
    S.Display(vec);
    return 0;
}