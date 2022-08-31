/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=l-(l-r)/2;
            if(nums[mid]>=target) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if (n==0) return {-1,-1};
        if(nums[n-1]<target) return{-1,-1};
        int LIndex,RIndex;
        LIndex=search(nums,target);
        if(nums[LIndex]!=target) return {-1,-1};
        RIndex=search(nums,target+1);
        return{LIndex,RIndex-1};
    }
};
// @lc code=end

