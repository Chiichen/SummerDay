/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& n, int k) {
        reverse(n.begin(),n.end());
        reverse(n.begin(),n.begin()+k);
        reverse(n.begin()+k,n.end());
    }
};
// @lc code=end

