/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int count=0,pos=0;
        if(nums.size()==1) return 0;
        while(pos<nums.size())
        {
            int max=0,maxboard=0;
            for(int j=pos+1;j<=pos+nums[pos];j++)
            {
                if(j>=nums.size()-1) return count+1;
                if(nums[j]+j>maxboard) max=j,maxboard=nums[j]+j;
            }
            pos=max,++count;
        }
        return count;
    }
};
// @lc code=end

