// 236. Lowest Common Ancestor of a Binary Tree
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
// Method :- 01
class Solution {
public:
    bool existInTree(TreeNode* root, TreeNode* target){
        if(root==NULL) return false;
        if(root==target) return true;
        return existInTree(root->left,target) || existInTree(root->right,target);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p || root == q) return root;
        else if(existInTree(root->left,p) && existInTree(root->right,q)) return root;
        else if(!existInTree(root->left,p) && !existInTree(root->right,q)) return root;
        else if(existInTree(root->left,p) && !existInTree(root->right,q)){
            return lowestCommonAncestor(root->left,p,q);
        }
        else return lowestCommonAncestor(root->right,p,q);
    }
};

// Method :- 02 more fast
class Solution {
public:

    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == NULL){
            return NULL;
        }

        if(root->val == p->val || root->val == q->val){
            return root;
        }

        TreeNode* leftAns = solve(root->left,p,q);
        TreeNode* RightAns = solve(root->right,p,q);

        if(leftAns != NULL && RightAns != NULL){
            return root;
        }

        else if(leftAns == NULL && RightAns != NULL){
            return RightAns;
        }
        else if(leftAns != NULL && RightAns == NULL){
            return leftAns;
        }
        else{
            return NULL;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        TreeNode* ans = solve(root,p,q);
        return ans;
    }
};
int main(){
    return 0;
}