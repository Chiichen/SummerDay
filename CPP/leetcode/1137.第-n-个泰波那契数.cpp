/*
 * @lc app=leetcode.cn id=1137 lang=cpp
 *
 * [1137] 第 N 个泰波那契数
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        int f[40];
        memset(f,0,sizeof(f));
        f[0]=0,f[1]=1,f[2]=1,f[3]=2;
        for(int i=4;i<=n;i++)
        {
            f[i]=f[i-1]+f[i-2]+f[i-3];
        }
        return f[n];

    }
};
// @lc code=end

