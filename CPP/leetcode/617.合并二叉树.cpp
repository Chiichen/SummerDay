/*
 * @lc app=leetcode.cn id=617 lang=cpp
 *
 * [617] 合并二叉树
 */

// @lc code=start

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 #include <bits/stdc++.h>
 using namespace std;
 

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {//DFS递归的做法
        if (t1 == nullptr) {
            return t2;
        }
        if (t2 == nullptr) {
            return t1;
        }
        auto merged = new TreeNode(t1->val + t2->val);
        merged->left = mergeTrees(t1->left, t2->left);
        merged->right = mergeTrees(t1->right, t2->right);
        return merged;
    }
};


// class Solution {
// public:
//     void bfs(TreeNode* anspta, TreeNode* pt1, TreeNode* pt2)
//     {
//         if(pt1==nullptr&&pt2==nullptr) return;
//         if(pt1!=nullptr&&pt2==nullptr)
//         {
//             if(pt1->left!=nullptr) anspta->left=new TreeNode(pt1->left->val);
//             if(pt1->right!=nullptr) anspta->right=new TreeNode(pt1->right->val);
//             return;
//         }
//         if(pt1==nullptr&&pt2!=nullptr)
//         {
//             if(pt2->left!=nullptr) anspta->left=new TreeNode(pt2->left->val);
//             if(pt2->right!=nullptr) anspta->right=new TreeNode(pt2->right->val);
//             return;
//         }
//         if(pt1->left!=nullptr&&pt2->left!=nullptr) anspta->left=new TreeNode(pt1->left->val+pt2->left->val);
//         if(pt1->right!=nullptr&&pt2->right!=nullptr) anspta->right=new TreeNode(pt1->right->val+pt2->right->val);
//         if(pt1->left!=nullptr&&pt2->left==nullptr) anspta->left=new TreeNode(pt1->left->val);
//         if(pt1->left==nullptr&&pt2->left!=nullptr) anspta->left=new TreeNode(pt2->left->val);
//         if(pt1->right==nullptr&&pt2->right!=nullptr) anspta->right=new TreeNode(pt2->right->val);
//         if(pt1->right!=nullptr&&pt2->right==nullptr) anspta->right=new TreeNode(pt1->right->val);

//     }
//     TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//         if(root1==nullptr&&root2==nullptr) return nullptr;
//         else if(root1==nullptr) return root2;
//         else if(root2==nullptr) return root1;
//         else
//         {
//         TreeNode* ansroot=new TreeNode(root1->val+root2->val);
//         auto pta=ansroot;
//         queue<TreeNode*> q1,q2,q3;
//         q1.push(root1),q2.push(root2),q3.push(pta);
//         while(!q1.empty()&&!q2.empty())
//         {
//             TreeNode* pt1=q1.front(),*pt2=q2.front(),*anspta=q3.front();
//             q1.pop(),q2.pop(),q3.pop();
//             bfs(anspta,pt1,pt2);
//             if(pt1->left!=nullptr&&pt2->left!=nullptr) q3.push(anspta->left),q1.push(pt1->left),q2.push(pt2->left),bfs(anspta->left,pt1->left,pt2->left);
//             if(pt1->right!=nullptr&&pt2->right!=nullptr) q3.push(anspta->right),q1.push(pt1->right),q2.push(pt2->right),bfs(anspta->right,pt1->right,pt2->right);
//             if(pt1->left!=nullptr&&pt2->left==nullptr) q3.push(anspta->left),q1.push(pt1->left),bfs(anspta->left,pt1->left,pt2->left);
//             if(pt1->left==nullptr&&pt2->left!=nullptr) q3.push(anspta->left),q2.push(pt2->left),bfs(anspta->left,pt1->left,pt2->left);
//             if(pt1->right==nullptr&&pt2->right!=nullptr) q3.push(anspta->right),q1.push(pt1->right),bfs(anspta->right,pt1->right,pt2->right);
//             if(pt1->right!=nullptr&&pt2->right==nullptr) q3.push(anspta->right),q2.push(pt1->right),bfs(anspta->right,pt1->right,pt2->right);    
//         }
//         while(!q1.empty())
//         {
//             TreeNode* pt1=q1.front(),*anspta=q3.front();
//             q1.pop(),q3.pop();
//             bfs(anspta,pt1,nullptr);
//             if(pt1->left!=nullptr) q1.push(pt1->left),q3.push(anspta->left),bfs(anspta->left,pt1->left,nullptr);
//             if(pt1->right!=nullptr) q1.push(pt1->right),q3.push(anspta->right),bfs(anspta->right,pt1->right,nullptr);
//         }
//         while(!q2.empty())
//         {
//             TreeNode* pt1=q2.front(),*anspta=q3.front();
//             q2.pop(),q3.pop();
//             bfs(anspta,pt1,nullptr);
//             if(pt1->left!=nullptr) q1.push(pt1->left),q3.push(anspta->left),bfs(anspta->left,pt1->left,nullptr);
//             if(pt1->right!=nullptr) q1.push(pt1->right),q3.push(anspta->right),bfs(anspta->right,pt1->right,nullptr);
//         }
//         return ansroot;
//         }

//     }
// };
// @lc code=end

