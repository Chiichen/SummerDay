/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start


struct ListNode {
  int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto search=head;
        int tol=0,cur=0;
        while(search!=nullptr)
        {
            search=search->next;
            tol++;
        }
        search=head;
        if(search->next==nullptr) return nullptr;    
        if(tol-n==0) return head->next;
        for(;cur<tol-n-1;cur++)
        {
            search=search->next;
        }
        search->next=search->next->next;
        return head;
    }
};
// @lc code=end

