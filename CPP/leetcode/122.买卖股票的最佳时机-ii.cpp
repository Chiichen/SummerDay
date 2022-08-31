/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>dp(n,0);
        int maxans=0;
        for (int i = 1; i < n; i++)
        {
            dp[i]=dp[i-1]+max(0,prices[i]-prices[i-1]);
        }
        return dp[n-1];
        
    }
};
// @lc code=end

