/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        auto it=n.begin();
        auto ite=n.end()-1;
        while(1)
        {
            if(*it+*ite==t)
            {
                return{(int)distance(n.begin(),it)+1,(int)distance(n.begin(),ite)+1};
            }
            else
            {
                while(*it+*ite<t) it++;
                while(*it+*ite>t) ite--;
            }
        }
    }
};
// @lc code=end

