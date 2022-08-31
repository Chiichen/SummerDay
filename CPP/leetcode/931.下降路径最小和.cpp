/*
 * @lc app=leetcode.cn id=931 lang=cpp
 *
 * [931] 下降路径最小和
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==1) return matrix[0][0];
        if(n==0) return 0;
        vector<vector<int>>dp(n,vector<int>(n,0));
        dp[0]=matrix[0];
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(j==0) dp[i][j]=min(dp[i-1][j]+matrix[i][j],dp[i-1][j+1]+matrix[i][j]);
                else if(j==n-1) dp[i][j]=min(dp[i-1][j]+matrix[i][j],dp[i-1][j-1]+matrix[i][j]);
                else{
                    dp[i][j]=min(dp[i-1][j+1]+matrix[i][j],min(dp[i-1][j]+matrix[i][j],dp[i-1][j-1]+matrix[i][j]));
                }
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
        
    }  
};
// @lc code=end

