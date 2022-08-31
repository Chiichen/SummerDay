/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        auto prehead=new ListNode(200,head);
        auto fast=prehead,slow=prehead;
        while(fast!=nullptr&&fast->next!=nullptr)
        {
        while(fast->next!=nullptr&&fast->next->val!=fast->val) slow=fast=fast->next;
        while(fast->next!=nullptr&&fast->val==fast->next->val) fast=fast->next;
        fast=fast->next;
        slow->next=fast;
        slow=fast;   
        }
        return prehead->next;
        
        
    }
};
// @lc code=end

