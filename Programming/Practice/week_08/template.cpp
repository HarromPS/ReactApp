#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
using namespace std;

// Using STL for data manipulation
// Creating a vector template class function
template <class T>
void Display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Push function
void Push(vector<int> &v, int n)
{
    int element;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element to push in the stack: ";
        cin >> element;
        (v).push_back(element);
    }
}
void Pop(vector<int> &v, int x)
{
    for (int i = 0; i < x; i++)
    {
        (v).pop_back();
    }
}
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // for(int i=0;i<nums.size();i++)
        // {
        vector<int> iter;
        iter = nums;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    iter.push_back(i);
                    iter.push_back(j);
                }
            }
            return iter;
        }
        // }
    }
};
int main()
{
    cout << "Enter the size of your array: ";
    int n;
    cin >> n;
    vector<int> vec;
    // using directly
    // cout << vec.size();
    // Push(vec,n);
    // Display(vec);
    // cout << "Enter how many element to pop out: ";
    // int x;
    // cin >> x;
    // Pop(vec, x);
    // Display(vec);
    vec.push_back(45);
    vec.push_back(23);
    vec.push_back(34);
    vec.push_back(12);
    vec.push_back(12);
    Display(vec);
    // cout<<"Enter an element at first using an iterator: ";
    vector<int>::iterator iter;
    // iterator is pointing to the first element of the vector
    iter = vec.begin();
    vec.insert(iter, 11);
    Display(vec);
    vec.insert(iter, 123);
    Display(vec);
    vec.insert(iter, 2, 123);
    Display(vec);
    // vec.insert(iter+1,10);
    // Display(vec);
    // vec.insert(iter+1,10);
    // Display(vec);
    // vec.insert(iter+1,10);
    // Display(vec);
    // vec.insert(iter+1,10);
    // Display(vec);

    list<int> lst;
    cout << "Entering elements in the list: " << endl;
    lst.push_back(12);
    lst.push_back(3);
    lst.push_back(14);
    lst.push_back(34);
    lst.push_back(23);
    return 0;
}