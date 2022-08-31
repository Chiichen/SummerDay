/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& n) {
        if(n.size()==1) return n[0];
        vector<int>f;
        f.push_back(n[0]),f.push_back(max(n[0],n[1]));
        for (int i = 2; i < n.size(); i++)
        {
            f.push_back(max(f[i-2]+n[i],f[i-1]));
        }
        return f[n.size()-1];
        
    }
};
// @lc code=end

