/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int expand(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            --left;
            ++right;
        }
        return (right - left - 2) / 2;
    }

    string longestPalindrome(string s) {
        int start = 0, end = -1;
        string t = "#";
        for (char c: s) {
            t += c;
            t += '#';
        }
        t += '#';
        s = t;

        vector<int> arm_len;
        int right = -1, j = -1;
        for (int i = 0; i < s.size(); ++i) {
            int cur_arm_len;
            if (right >= i) {
                int i_sym = j * 2 - i;
                int min_arm_len = min(arm_len[i_sym], right - i);
                cur_arm_len = expand(s, i - min_arm_len, i + min_arm_len);
            } else {
                cur_arm_len = expand(s, i, i);
            }
            arm_len.push_back(cur_arm_len);
            if (i + cur_arm_len > right) {
                j = i;
                right = i + cur_arm_len;
            }
            if (cur_arm_len * 2 + 1 > end - start) {
                start = i - cur_arm_len;
                end = i + cur_arm_len;
            }
        }

        string ans;
        for (int i = start; i <= end; ++i) {
            if (s[i] != '#') {
                ans += s[i];
            }
        }
        return ans;
    }
};





// class Solution {
// public:
//     string longestPalindrome(string s) {
//         if(s=="") return "";
//         string cur, ans;
//         int n=s.size();
//         ans.push_back(s[0]);
//         for (int i = 0; i < n; i++)
//         {
//             if(s[i]!=s[i+1]||(i>0&&i<n-1&&s[i]==s[i+1]&&s[i]==s[i-1]))
//             {
//                 int forward=i,backward=i;
//                 while(forward-1>=0&&backward+1<n&&s[forward-1]==s[backward+1])
//                 {
//                     --forward;
//                     ++backward;
//                 }
//                 cur=s.substr(forward,backward-forward+1);
//                 if(cur.size()>ans.size()) ans=cur;
//             }
//             if(s[i]==s[i+1])
//             {
//                 int forward=i,backward=i+1;
//                 while(forward-1>=0&&backward+1<n&&s[forward-1]==s[backward+1])
//                 {
//                     --forward;
//                     ++backward;
//                 }
//                 cur=s.substr(forward,backward-forward+1);
//                 if(cur.size()>ans.size()) ans=cur;
//             }

//         }
//         return ans;
        
//     } 
// };
// @lc code=end

