/*
 * @lc app=leetcode.cn id=918 lang=cpp
 *
 * [918] 环形子数组的最大和
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& num) {
        int n=num.size();
        vector<int>f;
        if(num.size()==1) return num[0];
        f.push_back(num[0]);
        int sum=accumulate(num.begin(),num.end(),0);
        for (int i = 1; i < n; i++)
        { 
            f.push_back(max(f[i-1]+num[i],num[i]));
        }
        int maxans1=f[0];
        for(auto e:f)
        {
            maxans1=max(maxans1,e);
        }
        f[1]=num[1];
        for (int i = 2; i < n-1; i++)
        { 
            f[i]=min(f[i-1]+num[i],num[i]);
        }
        int mina=f[0];
        for(int i=1;i<num.size()-1;i++)
        {
            mina=min(mina,f[i]);
        }
        int maxans2=sum-mina;
        return max(maxans1,maxans2);
    }
};
// @lc code=end

