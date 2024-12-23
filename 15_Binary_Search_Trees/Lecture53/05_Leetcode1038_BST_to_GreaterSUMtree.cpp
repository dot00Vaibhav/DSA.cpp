// 1038. Binary Search Tree to Greater Sum Tree
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

class Solution {
public:
    void reverseInorder(TreeNode* root,int &sum){
        if(root == NULL) return;
        reverseInorder(root->right,sum);
        root->val = root->val + sum;
        sum = root->val;
        reverseInorder(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        reverseInorder(root,sum);
        return root;
    }
};
int main(){
    return 0;
}