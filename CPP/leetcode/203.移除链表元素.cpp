/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* prehead=new ListNode(0,head);
        auto fast=prehead,slow=prehead;
        if(head==nullptr) return nullptr;
        if(head->next==nullptr&&head->val==val) return nullptr;
        while(fast!=nullptr&&fast->next!=nullptr)
        {
            while(fast->next!=nullptr&&fast->next->val!=val) fast=fast->next;
            slow=fast;
            while(fast->next!=nullptr&&fast->next->val==val) fast=fast->next;
            slow->next=fast->next;
            slow=fast=fast->next;                

        }
        return prehead->next;
    }
};
// @lc code=end

