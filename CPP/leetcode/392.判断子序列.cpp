/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")return true;
        if(t=="") return false;
        if(s.size()>t.size()) return false;
        

        int sn=s.size(),tn=t.size();
        for (int i = 0; i < tn; i++)
        {
            int count=0;
            if(t[i]==s[0])
            {
                int k=i;
                for (int j = 0; j < sn; j++)
                {
                    for (; k < tn; k++)
                    {
                        if(t[k]==s[j]) 
                        {
                            ++count;
                            ++k;
                            break;
                        }
                    }
                    
                }
                if(count==sn) return true;
                
            }
        }
        return false;
    }
};
// @lc code=end

