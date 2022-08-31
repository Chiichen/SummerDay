/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>map={
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        stack<char> stk;
        for(auto& e:s)
        {
            if(map.count(map[e])&&!stk.empty()){
                if(map[e]==stk.top()){
                    stk.pop();
                }
                else{
                    stk.push(e);
                }
            }
            else{
                stk.push(e);
            }
        }
        return stk.empty();
    }
};
//"(){}}{"
// @lc code=end

