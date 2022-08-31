/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto dumbl1 = new ListNode(0,l1);
        auto dumbl2 = new ListNode(0,l2);
        auto head1 = new ListNode((l1->val+l2->val)%10);
        auto head=head1;
        auto last = head;
        int add = (l1->val+l2->val)/10;
        
        while(l1!=nullptr||l2!=nullptr)
        {
            if(l1!=nullptr&&l2!=nullptr)
            {
              delete last;
              last=nullptr;
              auto last = new ListNode((l1->val+l2->val+add)%10);
              head->next=last;
              ++head;
              add = (l1->val+l2->val)%10;
              l1=l1->next;
              l2=l2->next;
            }
            else if(l1!=nullptr&&l2==nullptr)
            {
                //delete last;
                auto last = new ListNode(l1->val);
                head->next=last;
                ++head;
                add=0;
                l1=l1->next;
            }
            else if (l1==nullptr&&l2!=nullptr)
            {
                //delete last;
                auto last = new ListNode(l2->val);
                head->next=last;
                ++head;
                add=0;
                l2=l2->next;
            }
        }
        last->next=nullptr;
        return head;
    }
};
// @lc code=end

