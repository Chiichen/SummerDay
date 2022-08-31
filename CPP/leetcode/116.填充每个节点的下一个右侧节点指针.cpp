/*
 * @lc app=leetcode.cn id=116 lang=cpp
 *
 * [116] 填充每个节点的下一个右侧节点指针
 */

// @lc code=start
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}

    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr) return root;
        if(root->left!=nullptr)
        {
            root->left->next=root->right;
            if(root->next!=nullptr)
            {
                root->right->next=root->next->left;
            }
            connect(root->left);
            connect(root->right);
        }
        return root;
    }
};
// @lc code=end

