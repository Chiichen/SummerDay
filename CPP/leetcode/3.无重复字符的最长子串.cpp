/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>curstring;
        int maxans=0,cur=0;
        int j=0;
        for (int i = 0; i < s.size()&&j < s.size(); i++)
        {
            for(j=i;j<s.size();j++)
            {
                if(curstring.count(s[j])==0) {
                    curstring[s[j]]=j;
                    ++cur;
                    maxans=max(maxans,cur);
                }
                else
                {
                    i=curstring[s[j]];
                    cur=0;
                    curstring.clear();
                    break;
                }


            }
        }
        return maxans;
        
    }
};
// @lc code=end

