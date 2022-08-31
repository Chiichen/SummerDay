/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        vector<int>ans;
        auto it=n.begin();
        while(it!=n.end()&&*it<0) it++;
        for(int &e:n)
        {
            e*=e;
        }
        if(it==n.end())
        {
            for(int i=n.size()-1;i>=0;i--) ans.push_back(n[i]);
        }
        else if(it==n.begin())
        {
            for(int e:n) ans.push_back(e); 
        }
        else
        {
            auto it2=it;
            while(it!=n.end()&&it2!=n.begin())
            {
                if(*it>=*(it2-1))
                {
                    it2--;
                    ans.push_back(*it2);

                }
                else
                {
                    ans.push_back(*it);
                    it++;
                }
            }
            while(it==n.end()&&it2!=n.begin())
            {
                it2--;
                ans.push_back(*it2);
            }
            while(it!=n.end()&&it2==n.begin())
            {
                ans.push_back(*it);
                it++;
            }
            return ans;

        }
    }
};
// @lc code=end

