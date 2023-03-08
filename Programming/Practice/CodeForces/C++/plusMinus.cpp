// #include <iostream>
// #include <cstdlib>
// #include <string>
// using namespace std;

// int main()
// {
//     int t;
//     cout << "Enter test cases: ";
//     cin >> t;
//     for (int j = 0; j < t; j++)
//     {
//         cout << "Enter: ";
//         int n;
//         cin >> n;
//         cout << "Enter: ";
//         string s1;
//         cin >> s1;
//         for (int i = 0; i < n; i++)
//         {
//             if (s1[i] == '0' && s1[i + 1] == '0')
//             {
//                 s1[i] = '+';
//             }
//             else if (s1[i] == '0' && s1[i + 1] == '1')
//             {
//                 s1[i] = '+';
//             }
//             else if (s1[i] == '1' && s1[i + 1] == '0')
//             {
//                 s1[i] = '+';
//             }
//             else if (s1[i] == '1' && s1[i + 1] == '1')
//             {
//                 s1[i] = '-';
//             }
//         }
//         for(int i=0;i<n-1;i++)
//         {
//             cout<<s1[i];
//         }
//     }
// }
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    // cout << "Enter test cases: ";
    cin >> t;
    int x = 0;
    for (int j = 0; j < t; j++)
    {
        // cout << "Enter: ";
        x = 0;
        int n;
        cin >> n;
        // cout << "Enter: ";
        string s1;
        cin >> s1;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (s1[i] == '1')
                {
                    // cout << "+";
                    // s1[i] = '+';
                    x++; // found one 1
                }
            }
            else if (s1[i] == '1')
            {
                x++; // found one 1
                if (x % 2 == 0)
                {
                    // s1[i] = '-';
                    cout << "-";
                }
                else
                {
                    // s1[i] = '+';
                    cout << "+";
                }
            }
            else
            {
                // s1[i] = '+';
                cout << "+";
            }
        }
        // for (int i = 1; i < n ; i++)
        // {
        //     cout << s1[i];
        // }
        cout << endl;
    }
    return 0;
}