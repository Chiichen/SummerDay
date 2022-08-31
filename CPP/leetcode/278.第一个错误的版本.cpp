/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int begin=1,end=n;
        while(1)
        {
            if((end==begin+1&&isBadVersion(end)&&!isBadVersion(begin))||(end==begin&&isBadVersion(end))) return end;
            else if(isBadVersion(begin+(end-begin)/2)) end=begin+(end-begin)/2;
            else if(!isBadVersion(begin+(end-begin)/2)) begin=begin+(end-begin)/2;  
        }
    }
};
// @lc code=end

