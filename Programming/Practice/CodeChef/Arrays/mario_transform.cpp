#include <iostream>
#include <cstdio>
using namespace std;
/*
Mario transforms each time he eats a mushroom as follows:

If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
Given that Mario was initially normal,
find his size after eating XX mushrooms.
Mario transforms each time he eats a mushroom as follows:

If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
e.g Test cases: 3, 1:2, 2:4, 3:12
output: Small Huge Normal*/
int main()
{
    int test_cases, transform; // initially transform is normal
    cout << "Enter total number of the integers: ";
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        cout << "Enter the number of mushrooms ";
        int mushrooms;
        cin >> mushrooms;
        transform=mushrooms%3;
        // for (int j = 0; j <= mushrooms; j++)
        // {
        //     if (transform > 3)
        //     {
        //         transform = 1;
        //         // cout<<transform<<endl;
        //     }
        //     else
        //     {
        //         transform++;
        //         // cout<<transform<<endl;
        //     }
        // }
        // if (transform > 3)
        //     transform = 1;
        if (transform == 2)
        {

            cout << "SMALL" << endl;
        }
        else if (transform == 0)
        {
            cout << "NORMAL" << endl;
        }
        else if (transform == 1)
        {
            cout << "HUGE" << endl;
        }
        cout << endl;
        mushrooms = 0;
    }
    return 0;
}