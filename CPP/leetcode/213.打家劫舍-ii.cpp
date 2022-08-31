/*
 * @lc app=leetcode.cn id=213 lang=cpp
 *
 * [213] 打家劫舍 II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob1(vector<int>& n) {
        if(n.size()==1) return n[0];
        vector<int>f;
        f.push_back(n[0]),f.push_back(max(n[0],n[1]));
        for (int i = 2; i < n.size(); i++)
        {
            f.push_back(max(f[i-2]+n[i],f[i-1]));
        }
        return f[n.size()-1];
        
        
    }
    int rob(vector<int>& n) {
        if(n.size()==1) return n[0];
        vector<int>n1=vector<int>(n.begin()+1,n.end());
        vector<int>n2=vector<int>(n.begin(),n.end()-1);
        return max(rob1(n1),rob1(n2));
        
        
    }
};
// @lc code=end

