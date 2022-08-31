/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ra, string ma) {
        vector<int>a(30,0);
        vector<int>b(30,0);
        for(char r:ra)
        {
            ++a[r-'a'];
        }
        for(char r:ma)
        {
            ++b[r-'a'];
        }
        for(int i=0;i<30;i++)
        {
            if(b[i]<a[i]) return false;
        }
        return true;
    }
};
// @lc code=end

