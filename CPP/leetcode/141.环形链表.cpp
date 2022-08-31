/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
 struct ListNode {
    int val;
   ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto ptl=head;
        if(head==nullptr||head->next==nullptr) return false;
        unordered_map<ListNode*,int>mymap;
        while(ptl->next!=nullptr)
        {
            if(mymap.count(ptl->next)!=0) return true;
            else
            {
            mymap[ptl]++;
            ptl=ptl->next;    
            }


        }
        return false;
    }
};
// @lc code=end

