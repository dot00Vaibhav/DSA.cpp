// 94. Binary Tree Inorder Traversal
#include<iostream>
#include<vector>
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

class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans){
        if(root == NULL) return;// base case
        helper(root->left,ans);//call 1
        ans.push_back(root->val);// work
        helper(root->right,ans);//call 2
    }
    vector<int> InorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};
int main(){
    return 0;
}