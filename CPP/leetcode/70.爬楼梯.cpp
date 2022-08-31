/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<int>f;
        f.push_back(0),f.push_back(1),f.push_back(2);
        for(int i=3;i<=n;i++)
        {
            f.push_back(f[i-1]+f[i-2]);
        }
        return f[n];
    }
};
// @lc code=end

