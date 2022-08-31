/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& p) {
        vector<int>f;
        f.push_back(0);
        for(int i=1;i<p.size();i++)
        {
            f.push_back(max(0,f[i-1]+p[i]-p[i-1]));
        }
        return *max_element(f.begin(),f.end());
    }
};
// @lc code=end

