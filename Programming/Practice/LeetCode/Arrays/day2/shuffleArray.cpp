#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Solution
{
    vector<int> array;
    int size;

public:
    Solution(vector<int> &nums)
    {
        array = nums;
        size = array.size();
    }

    vector<int> reset()
    {
        return array;
    }

    vector<int> shuffle()
    {
        // make a copy of the original
        vector<int> sh = array;

        int tempSize = size,temp=0;
        for (int i = size - 1; i >= 0; i--)
        {
            // generating random index in range
            int random = rand() % tempSize;

            // swapping the array elements to get the shuffled array
            temp=sh[i];
            sh[i]=sh[random];
            sh[random]=temp;
            tempSize--;
        }
        return sh;
    }
};

int main(){
    vector<int> nums;
    return 0; 
}
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */