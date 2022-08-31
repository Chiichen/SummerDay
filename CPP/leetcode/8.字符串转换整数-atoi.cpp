/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;


class Automaton {
    string state = "start";
    unordered_map<string, vector<string>> table = {
        {"start", {"start", "signed", "in_number", "end"}},
        {"signed", {"end", "end", "in_number", "end"}},
        {"in_number", {"end", "end", "in_number", "end"}},
        {"end", {"end", "end", "end", "end"}}
    };

    int get_col(char c) {
        if (isspace(c)) return 0;
        if (c == '+' or c == '-') return 1;
        if (isdigit(c)) return 2;
        return 3;
    }
public:
    int sign = 1;
    long long ans = 0;

    void get(char c) {
        state = table[state][get_col(c)];
        if (state == "in_number") {
            ans = ans * 10 + c - '0';
            ans = sign == 1 ? min(ans, (long long)INT_MAX) : min(ans, -(long long)INT_MIN);
        }
        else if (state == "signed")
            sign = c == '+' ? 1 : -1;
    }
};

class Solution {
public:
    int myAtoi(string str) {
        Automaton automaton;
        for (char c : str)
            automaton.get(c);
        return automaton.sign * automaton.ans;
    }
};


//以上为标准答案，使用了有限状态机，仅供参考。

// class Solution {
// public:
//     int myAtoi(string s) {
//         int q=1;
//         long ans=0;
//         auto iter=s.begin();
//         while(!isdigit(*iter))
//         {
//         while((*iter)==' ')++iter;
//         if((*iter)=='+')
//         {
//             if(iter+1==s.end()||!isdigit(*(iter+1))) return 0;
//             else ++iter;
//         }
//         else if ((*iter)=='-') 
//         {
//             if(iter+1==s.end()||!isdigit(*(iter+1))) return 0;
//             else    q=-1,++iter; 
//         }
 
//         if(*iter!='+'&&*iter!='-'&&!isdigit(*iter)) return 0;
//         }

//         while(1)
//         {
//             if(iter==s.end()||!isdigit(*iter)||ans>INT32_MAX||ans<INT32_MIN) return ans*q>INT32_MAX?INT32_MAX:(ans*q<INT32_MIN?INT32_MIN:ans*q);
//             ans=ans*10+(*iter-'0');
//             ++iter;
//         }
//         return 0;

//     }
// };
// @lc code=end

