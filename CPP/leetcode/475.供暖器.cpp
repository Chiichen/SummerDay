/*
 * @lc app=leetcode.cn id=475 lang=cpp
 *
 * [475] 供暖器
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int ans=0;
        int n=heaters.size();
        for(int house:houses)
        {
            int j=upper_bound(heaters.begin(),heaters.end(),house)-heaters.begin();
            int i=j-1;
            int leftdis=(i<0?INT_MAX:house-heaters[i]);
            int rightdis=(j>=n?INT_MAX:heaters[j]-house);
            int curdis=min(leftdis,rightdis);
            ans=max(curdis,ans);
        }
        return ans;
    }
};
// @lc code=end

