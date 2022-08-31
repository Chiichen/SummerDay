/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int>f;
        if(nums.size()==1) return true;
        if(nums[0]==0) return false;
        f.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            f.push_back(max(f[i-1],i+nums[i]));
            if(f[i]<=i&&i!=nums.size()-1) return false;
        }
        return true;
        
    }
};
// @lc code=end

