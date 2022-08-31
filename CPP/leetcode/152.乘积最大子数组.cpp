/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>f1;//标定最大值
        vector<int>f2;//标定最小值
        f1.push_back(nums[0]),f2.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            f1.push_back(max(max(f1[i-1]*nums[i],f2[i-1]*nums[i]),nums[i]));
            f2.push_back(min(min(f1[i-1]*nums[i],f2[i-1]*nums[i]),nums[i]));
        }
        return *max_element(f1.begin(),f1.end());
        
    }
};
// @lc code=end

