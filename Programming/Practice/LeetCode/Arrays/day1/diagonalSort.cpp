#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int j = 1, z = 0, x = 0, y = 0;
        int i = mat.size() - 1;
        while (z < (mat[0].size() + mat.size()) - 1)
        {
            x = i;
            y = j;
            int u = mat.size() - (mat.size() - j);
            while (u > 0)
            {
                x = i;
                y = j;
                while (x > 0 && y > 0)
                {
                    if (mat[x][y] < mat[x - 1][y - 1])
                    {
                        int temp = mat[x][y];
                        mat[x][y] = mat[x - 1][y - 1];
                        mat[x - 1][y - 1] = temp;
                    }
                    x--;
                    y--;
                }
                u--;
            }
            if (i > 0 && j == mat[0].size() - 1)
            {
                i--;
            }
            if (j < mat[0].size() - 1)
            {
                j++;
            }
            z++;
        }
        return mat;
    }
};
int main()
{
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(1);
    vector<vector<int>> v2;
    v2.push_back(v1);
    v1.clear();

    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(v1);
    v1.clear();

    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(v1);
    Solution s;
    s.diagonalSort(v2);

    return 0;
}