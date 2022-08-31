/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace  std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int xn=grid.size();
        int yn=grid[0].size();
        vector<vector<int>>dp(xn,vector<int>(yn,0));
        dp[0][0]=grid[0][0];
        for (int i = 0; i < xn; i++)
        {
            for (int j = 0; j < yn; j++)
            {
               if(i==0&&j==0) continue;
               if(i==0) dp[i][j]=dp[i][j-1]+grid[i][j];
               else if(j==0) dp[i][j]=dp[i-1][j]+grid[i][j];
               else{
                   dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
               }
            }
            
        }
        return dp[xn-1][yn-1];
        
    }   
};
// @lc code=end

