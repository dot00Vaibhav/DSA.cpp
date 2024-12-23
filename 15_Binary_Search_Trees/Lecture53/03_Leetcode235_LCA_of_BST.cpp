//235. Lowest Common Ancestor of a Binary Search Tree
#include<iostream>
using namespace std;
class TreeNode{//This is a Tree TreeNode
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root->val == p->val || root->val == q->val) return root;
//         else if(root->val > p->val && root->val < q->val) return root;
//         else if(root->val < p->val && root->val > q->val) return root;
//         else if(root->val > p->val && root->val >q->val) return lowestCommonAncestor(root->left , p , q);
//         else return lowestCommonAncestor(root->right , p , q);
//     }
// };

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val > p->val && root->val >q-> val) return lowestCommonAncestor(root->left , p , q);
        else if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right , p , q);
        else return root;
    }
};
int main(){
    return 0;
}