/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n,0);
        int cur=0;
        for (int i = 0; i < n; i++)
        {
            cur=0;
            if(height[i]>0)
            {
                cur=height[i];
                ++i;
                while(i<n&&height[i]<cur)
                {
                    leftmax[i]=cur-height[i];
                    ++i;
                }
                --i;
            }
        }
        vector<int>rightmax(n,0);
        for (int i = n-1; i >=0; i--)
        {
            cur=0;
            if(height[i]>0)
            {
                cur=height[i];
                --i;
                while(i>=0&&height[i]<cur)
                {
                    rightmax[i]=cur-height[i];
                    --i;
                }
                ++i;
            }
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            ans+=min(leftmax[i],rightmax[i]);
        }
        return ans;
        
        
        

    }
};
// @lc code=end

