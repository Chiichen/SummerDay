/*
 * @lc app=leetcode.cn id=162 lang=cpp
 *
 * [162] 寻找峰值
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        int l = 0, r = n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(mid==0||mid==n-1) break;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]) return mid;
            if(nums[mid]<nums[mid+1]) l = mid;
            else r = mid;
        }
        return -1;
    }
};
// @lc code=end

