#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int tCase;
    cout << "Enter number of test cases: ";
    cin >> tCase;
    for(int i=0;i<tCase;i++)
    {
        int X,Y,A;
        cin>>X>>Y>>A;
        if(A>=X && A<Y)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}