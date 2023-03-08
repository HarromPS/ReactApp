#include <iostream>
#include <cstdio>
using namespace std;

// Function to show how recursion works
int greet(int a)
{
    cout<<"Before greet function: "<<a<<endl;
    if(a==1)
    return 0;
    greet(a-1);
    cout<<"After greet function: "<<a<<endl;
    cout<<"The number is: "<<a*a<<endl;

}
int main()
{
    greet(5);
    cout<<"In Main function"<<endl;

    return 0;
}