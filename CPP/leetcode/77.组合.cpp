/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>com(k,0);
        vector<vector<int>>ans;
        int count=0;
        trackback(ans,com,count,1,n,k);
        return ans;

    }
    void trackback(vector<vector<int>>& ans, vector<int>& com, int count, int pos, int n, int k)
    {
        if(count==k)
        {
            ans.push_back(com);
            return;
        }
        else
        {
            for (int i = pos; i <= n; i++)
            {
                com[count++]=i;
                trackback(ans,com,count,i+1,n,k);
                --count;
            }
            
        }
    }
};
// @lc code=end

