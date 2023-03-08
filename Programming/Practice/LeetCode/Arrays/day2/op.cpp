#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int x=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="--X")
            {
                --x;
            }
            else if(operations[i]=="++X")
            {
                ++x;
            }
            else if(operations[i]=="X--")
            {
                x--;
            }
            else if(operations[i]=="X++")
            {
                x++;
            }
        }
        return x;
    }
};
int main()
{
    Solution S;
    vector<string> vec;
    vec.push_back("--X");
    vec.push_back("++X");
    vec.push_back("X--");
    vec.push_back("X++");
    int x=S.finalValueAfterOperations(vec);
    cout<<x<<endl;
    return 0;
}