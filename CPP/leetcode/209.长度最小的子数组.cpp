/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,ans=n+1;
        int sum=0;
        while(r<n)//1,2,3,4,5
        {
            if(r<n&&sum+nums[r]<target){
                sum+=nums[r];
                ++r;
            }
            else
            {
                ans=min(r-l+1,ans);
                if(l==r) return 1;
                else{
                    sum-=nums[l];
                    ++l;
                }
            }
        }
        if(ans==n+1) return 0;
        return ans;
    }
};
// @lc code=end

