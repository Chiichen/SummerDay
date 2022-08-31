/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos=-1;
        if(needle=="") return 0;
        else if(haystack.size()<needle.size()) return -1;
        else
        {
            for(int i=0;i<haystack.size();i++)
            {
                int temp=i;
                if(haystack[i]==needle[0])
                {
                    pos=i;
                    int end=1;
                    for(int j=0;j<needle.size();)
                    {
                        if(haystack[i]==needle[j]&&i<haystack.size())
                        {
                            i++,j++;
                        }
                        else
                        {
                            pos=-1;
                            end=0;
                            i=temp;
                            break;
                        }
                    }
                    if(end)
                    {
                        return pos;
                    }
                }
            }
            return pos;
        }

    }
};
// @lc code=end

