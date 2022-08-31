/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        vector<vector<int>> dp={{tri[0][0]}};
        vector<int>line;
        for (int i = 1; i < n; i++)
        {
            line.clear();
            line.push_back(dp[i-1][0]+tri[i][0]);
            for (int j = 1; j < i; j++)
            {
                line.push_back(min(dp[i-1][j]+tri[i][j],dp[i-1][j-1]+tri[i][j]));
            }
            line.push_back(dp[i-1][i-1]+tri[i][i]);
            dp.push_back(line);
            
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
        
    }
};
// @lc code=end

