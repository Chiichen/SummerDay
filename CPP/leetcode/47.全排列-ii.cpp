/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int level = 0;
        int n = nums.size();
        vector<vector<int>> ans;
        trackback(ans,nums,level,n);
        return ans;
    }
    void trackback(vector<vector<int>> &ans, vector<int> &nums, int level, int n)
    {
        if (level == n - 1)
        {
            ans.push_back(nums);
            return;
        }
        else
        {
            for (int i = level; i < n; i++)
            {
                if (nums[i]!=nums[level])
                {
                    cout<<i<<' '<<level<<endl;
                    swap(nums[i], nums[level]);
                    trackback(ans, nums, level + 1, n);
                    swap(nums[i], nums[level]);
                }
                else if(i==n-1)
                {
                    //trackback(ans, nums, level + 1, n);
                }
            }
        }
    }
};
// @lc code=end

