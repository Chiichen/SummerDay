/*
 * @lc app=leetcode.cn id=1014 lang=cpp
 *
 * [1014] 最佳观光组合
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int mx=0,maxans=0;
        int n=values.size();
        for (int i = 1; i < n; i++)
        {
            mx=max(mx,values[i-1]+i-1);
            maxans=max(maxans,mx+values[i]-i);
        }
        return maxans;
        
    }
};
// @lc code=end

