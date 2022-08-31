/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>f;
        f.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            f.push_back(max(f[i-1]+nums[i],nums[i]));
        }
        int maxans=f[0];
        for(int i=1;i<f.size();i++)
        {
            maxans=max(f[i],maxans);
        }
        return maxans;
    }
};
// @lc code=end

