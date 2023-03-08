#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int tCase;
    cout<<"Enter number of test cases: ";
    cin>>tCase;
    for(int i=0;i<tCase;i++)
    {
        int length,count=0;
        // cout<<"Enter the string length: ";
        cin>>length;
        // int str[length];
        // for(int j=0;j<length;j++)
        // {
        //     cin>>str[j];
        // }
        // for(int k=0;k<length;k++)
        // {
        //     if(str[k]==1){
        //         count++;
        //     }
        // }
        cout<<": "<<length/2<<endl;
    }
    return 0;
}