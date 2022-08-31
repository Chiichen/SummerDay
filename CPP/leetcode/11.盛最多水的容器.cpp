/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int begin=0,n=height.size();        
        int end=n-1;
        if(n==1||n==0) return 0;
        if(n==2) return min(height[begin],height[end])*(end-begin);
        int water=min(height[begin],height[end])*(end-begin);
        while(begin<end)
        {
            int curwater=max(max(min(height[begin+1],height[end])*(end-begin-1),min(height[begin],height[end-1])*(end-begin-1)),min(height[begin+1],height[end-1])*(end-begin-2));
            water=max(water,curwater);
            if(height[begin]<height[end]){
                begin++;
                continue;
            }
            else{
                end--;
                continue;
            }

        }
        return water;
    }
};
// @lc code=end

