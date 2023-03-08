#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int testCase;
    cout << "Enter test case";
    cin >> testCase;
    while (testCase != 0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%n==1)
        {
            cout<<"0"<<endl;
        }
        else if(1){
            cout<<"0"<<endl;
        }
        else if(sum<0)
        {
                
        }
        testCase--;
    }
    return 0;
}