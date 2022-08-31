
/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        auto it=s.begin();
        auto ite=s.end()-1;
        while(it<ite)
        {
            swap(*it,*ite);
            it++,ite--;
        }
    }
};
// @lc code=end

