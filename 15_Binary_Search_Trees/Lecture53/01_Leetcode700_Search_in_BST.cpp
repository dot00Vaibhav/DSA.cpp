// 700. Search in a Binary Search Tree
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        if(root->val == val) return root;
        else if(root->val < val) return searchBST(root->right,val);//root->val > val
        else return searchBST(root->left,val);
    }
};
int main(){
    return 0;
}