/*
 * @lc app=leetcode.cn id=740 lang=cpp
 *
 * [740] 删除并获得点数
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
    int deleteAndEarn(vector<int>& n) {
        vector<int>ans(*max_element(n.begin(),n.end())+1);
        for(auto e:n) ans[e]+=e;
        return rob(ans);
    }
};
// @lc code=end

