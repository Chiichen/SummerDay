/*
 * @lc app=leetcode.cn id=139 lang=cpp
 *
 * [139] 单词拆分
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<bool> dp(n+1, false);
        unordered_set<string> m(wordDict.begin(), wordDict.end());
        dp[0] = true;
        for (int i = 1; i <= n; ++i){
            for (int j = 0; j < i; ++j){
                if (dp[j] && m.find(s.substr(j, i-j)) != m.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
// @lc code=end

