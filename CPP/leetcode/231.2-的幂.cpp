/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0||n<0) return false;
        if((n&(n-1))==0) return true;
        else{
            return false;
        }
    }
};
// @lc code=end

