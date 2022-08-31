/*
 * @lc app=leetcode.cn id=784 lang=cpp
 *
 * [784] 字母大小写全排列
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    vector<string> ans;
public:
    void dfs(string &s, int i){
        if(i==s.size()){
            ans.emplace_back(s);
            return ;
        }
        if(isdigit(s[i])){
            dfs(s, i+1);
        }
        else{
            s[i]=tolower(s[i]);
            dfs(s, i+1);

            s[i]=toupper(s[i]);
            dfs(s, i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        dfs(s, 0);
        return ans;
    }
};
// @lc code=end

