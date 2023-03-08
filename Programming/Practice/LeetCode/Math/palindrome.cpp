#include <iostream>
#include <cstdio>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        /*
        This is because 2147483644 + 4 = 2147483648 which is more than 2147483647 (which is signed int32 limit). And 64-bit integer type is long long int
        */
        long long int temp = x, rem, sum = 0;
        // O(n) ; where n = length of the number string
        while (x > 0)
        {
            rem = x % 10;
            sum = (sum * 10) + rem;
            x = x / 10;
        }
        if (temp == sum)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    Solution s;
   bool b=s.isPalindrome(x);
    if(b){
        cout<<"Is a Palindrome"<<endl;
    }
    else{
        cout<<"Is not a Palindrome"<<endl;
    }

    return 0;
}