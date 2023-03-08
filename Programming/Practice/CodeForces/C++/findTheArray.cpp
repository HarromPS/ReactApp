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
        // return the array size to be fitted, but there is no array
        int size = 0, n;
        cout << "Enter test case";
        cin >> n;
        while (n != 0)
        {
            if (n - 1 == 0)
            {
                size++;
                break;
            }
            n=n-1;
        }
        cout << size << endl;
        testCase--;
    }
    return 0;
}