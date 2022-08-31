/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
                vector<int>a(30,0);
        vector<int>b(30,0);
        for(char r:s)
        {
            ++a[r-'a'];
        }
        for(char r:t)
        {
            ++b[r-'a'];
        }
        for (int i = 0; i < 30; i++)
        {
            if(a[i]!=b[i]) return false;
        }
        return true;
        
    }
};
// @lc code=end

