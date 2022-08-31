/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int level=0;
        int n=nums.size();
        vector<vector<int>> ans;
        trackback(ans,nums,level,n);
        return ans;
    }
    void trackback(vector<vector<int>>& ans,vector<int>& nums, int level, int n)
    {
        if(level==n-1)
        {
            ans.push_back(nums);
            return;
        }
        else
        {
            for (int i = level; i < n; i++)
            {
                swap(nums[i],nums[level]);
                trackback(ans,nums,level+1,n);
                swap(nums[i],nums[level]);
            }
            
        }
    }
};
// @lc code=end

