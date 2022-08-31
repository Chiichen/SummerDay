/*
 * @lc app=leetcode.cn id=309 lang=cpp
 *
 * [309] 最佳买卖股票时机含冷冻期
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int dp[n][2];
        if(n==1) return 0;
        if(n==2) return max(0,prices[1]-prices[0]);
        dp[0][0]=0,dp[0][1]=-prices[0];
        dp[1][0]=max(dp[0][0],dp[0][1]+prices[1]);
        dp[1][1]=max(-prices[0],-prices[1]);
        for (int i = 2; i < n; i++)
        {
            dp[i][0]=max(dp[i-1][1]+prices[i],dp[i-1][0]);
            dp[i][1]=max(dp[i-1][1],dp[i-2][0]-prices[i]);
        }
        return max(dp[n-1][0],dp[n-1][1]);
        

    }
};
// @lc code=end

