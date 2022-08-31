/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int l = 0, r = n-1;
        int MinNum = nums[0];
        while(l<=r)
        {
            int mid = (l+r)/2;
            MinNum = min(min(min(MinNum,nums[l]),nums[r]),nums[mid]);
            if(nums[0]<nums[mid])
            {
                l = mid+1;
            } 
            else
            {
                r = mid-1;
            }
            if(l==r)
            {
                MinNum = min(MinNum,nums[l]);
                break;
            }
        }
        return MinNum;
    }
};
// @lc code=end

