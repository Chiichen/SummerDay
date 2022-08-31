/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat[0].size();
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        if(mat.size()*n!=r*c) return mat;
        else
        {
                for (int i = 0; i < r; i++)
                {
                    temp.clear();
                    for (int j = 0; j < c; j++)
                    {
                        temp.push_back(mat[index/n][index%n]);
                        ++index;
                    }
                    ans.push_back(temp);
                }
                return ans;            
        }


    }
};
// @lc code=end

