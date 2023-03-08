#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main()
{
    int test_cases;
    cout << "Enter total number of the test cases: ";
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int duration;
        cout <<i+1<<": ";
        cin >> duration;
        if (duration > 30)
        {
            cout << "YES" << endl;
        }
        else if (duration <=30)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}