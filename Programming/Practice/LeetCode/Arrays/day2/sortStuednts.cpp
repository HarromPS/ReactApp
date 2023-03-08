#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        // space complexity : O(1)
        // time complexity : O(n^3)
        int indexToMin = 0;
        int max_from_eachRow = 0, sum = 0;
        int max_from_eachComparison = 0;
        for (int i = 0; i < grid[0].size(); i++)
        {

            // for each row
            max_from_eachComparison = 0;
            for (int j = 0; j < grid.size(); j++)
            {
                max_from_eachRow = 0;

                // comparing every coloumn
                for (int k = 0; k < grid[0].size(); k++)
                {
                    if (grid[j][k] >= max_from_eachRow)
                    {
                        max_from_eachRow = grid[j][k];
                        indexToMin = k;
                    }
                }
                grid[j][indexToMin] = -1;
                if (max_from_eachRow > max_from_eachComparison)
                {
                    max_from_eachComparison = max_from_eachRow;
                }
            }
            sum += max_from_eachComparison;
        }
        return sum;
    }
};
int main()
{

    vector<int> v1;
    v1.push_back(50);
    v1.push_back(72);
    v1.push_back(65);
    v1.push_back(6);
    v1.push_back(81);
    v1.push_back(92);
    v1.push_back(18);
    v1.push_back(51);
    v1.push_back(10);
    v1.push_back(50);
    v1.push_back(32);
    // v1.push_back(64);
    // v1.push_back(32);
    // v1.push_back(14);
    // v1.push_back(54);
    // v1.push_back(16);
    // v1.push_back(45);
    // v1.push_back(15);
    // v1.push_back(94);
    // v1.push_back(40);
    // v1.push_back(51);
    // v1.push_back(7);
    // v1.push_back(4);
    // v1.push_back(17);
    // v1.push_back(81);
    // v1.push_back(69);
    // v1.push_back(96);
    // v1.push_back(79);
    // v1.push_back(88);
    // v1.push_back(11);
    // v1.push_back(60);
    // v1.push_back(91);
    // v1.push_back(21);
    // v1.push_back(82);
    // v1.push_back(56);
    // v1.push_back(30);
    // v1.push_back(38);
    // v1.push_back(19);

    //
    /*
    [50+72+65+6+81+92+18+51+10+50+32+64+32+14+54+16+45+64+27+45+15+94+40+51+7+4+17+81+69+96+79+88+11+60+91+21+82+56+30+38+19]

    */
    vector<vector<int>> v2;
    v2.push_back(v1);
    v1.clear();
    // v1.push_back(3);
    // v1.push_back(3);
    // v1.push_back(1);
    // v1.push_back(8);
    // v2.push_back(v1);

    class Solution s;
    int sum = s.deleteGreatestValue(v2);
    cout << sum << endl;
    return 0;
}