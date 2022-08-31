/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        vector<int>f;
        f.push_back(0),f.push_back(1),f.push_back(1);
        for(int i=3;i<=n;i++)
        {
            f.push_back(f[i-1]+f[i-2]);
        }
        return f[n];
    }
};
// @lc code=end

