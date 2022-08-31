/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>f;
        f.push_back(0),f.push_back(0);
        for(int i=2;i<=cost.size();i++)
        {
            f.push_back(min(f[i-1]+cost[i-1],f[i-2]+cost[i-2]));
        }
        return f[cost.size()];
    }
};
// @lc code=end

