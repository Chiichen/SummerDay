/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& n) {
        auto it1=n.begin();//it1寻找非零，it2寻找零
        auto it2=it1;
        while(it1!=n.end()&&it2!=n.end())
        {
            while(it1!=n.end()&&*it1==0||it1<it2) ++it1;
            while(it2!=n.end()&&*it2!=0) ++it2;
            if(it1!=n.end()&&it2!=n.end()&&it2<it1) swap(*it1,*it2);
        }
    }
};
// @lc code=end

