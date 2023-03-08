#include <iostream>
#include <cstdio>
using namespace std;

// Pattern
int main()
{
    int n = 3;
    // cout<<"Enter a number: ";
    // cin>>n;
    for (int rows = 0; rows < 2 * n - 1; rows++)
    {
        for (int col = 0; col < 2 * n - 1; col++)
        {
           if((rows==0 || rows==2*n-1) && (col==0 || col==2*n-1)){
            cout<<n<<" ";
           }
           else{
            cout<<n-1<<" ";
           }
        }
        cout << endl;
    }
    return 0;
}