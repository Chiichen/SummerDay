/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N 皇后
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    vector<vector<string>> result;
    bool isvalid(int x, int y, vector<string> &vec)
    {
        for (int xx = x - 1; xx <= x - 1 && xx >= 0; xx--)
        {
            if (vec[xx][y] == 'Q')
                return false;
        }
        for (int xx = x - 1, yy = y - 1; xx >= 0 && yy >= 0 && xx < vec.size() && yy < vec.size(); xx--, yy--)
        {
            if (vec[xx][yy] == 'Q')
                return false;
        }
        for (int xx = x - 1, yy = y + 1; xx >= 0 && yy >= 0 && xx < vec.size() && yy < vec.size(); xx--, yy++)
        {
            if (vec[xx][yy] == 'Q')
                return false;
        }
        return true;
    }

    void trackback(int x, vector<string> &vec)
    {
        if (x == vec.size())
            result.push_back(vec);
        for (int i = 0; i < vec.size(); i++)
        {
            if (isvalid(x, i, vec))
            {
                vec[x][i] = 'Q';
                trackback(x + 1, vec);
                vec[x][i] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        result.clear();
        vector<string> tempvec(n, string(n, '.'));
        trackback(0, tempvec);
        return result;
    }
};
// @lc code=end
