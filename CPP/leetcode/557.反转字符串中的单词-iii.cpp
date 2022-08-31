/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s1) {
        string s(s1);
        auto it=s.begin();
        auto ite=s.begin();
        while(ite!=s.end())
        {
            while(it!=s.end()&&isspace(*it)) it++;
            while(ite!=s.end()&&(!isspace(*ite)||ite<it)) ite++;
            reverse(it,ite);
            it=ite;
            if(ite!=s.end()) ite++;
        }
        return s;

    }
};
// @lc code=end

