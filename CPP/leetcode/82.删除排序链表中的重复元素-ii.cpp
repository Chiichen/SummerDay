/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
 */

// @lc code=start

//   Definition for singly-linked list.
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
        auto NumbHead = new ListNode(0,head);
        auto Before = head;
        auto After = NumbHead;
        while(Before!=nullptr)
            if(Before->next->val==Before->val)
            {
                int cur = Before->val;
                while(Before->next!=nullptr&&Before->next->val==cur) //1 1 2 2 3 3 4
                {
                    After->next = Before->next->next;
                    Before = Before->next;
                }
            }
        return head;
    }
};
// @lc code=end

