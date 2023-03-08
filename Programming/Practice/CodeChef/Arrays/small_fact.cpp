#include <iostream>
#include <cstdio>
using namespace std;
/*
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases,
followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!
e.g: test case=4 1:1, 2:2, 3:5, 4:3
output: 1,2,120,3
*/
int main()
{
    int test_cases, factorial = 1;
    cout << "Enter total number of the integers: ";
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int factNo;
        cout << "Enter the factorial number: ";
        cin >> factNo;
        for (int j = 1; j <= factNo; j++)
        {
            factorial *= j;
        }
        cout<<"The factorial of "<<factNo<<" is "<<factorial<<endl;
        factorial=1;
    }
    return 0;
}