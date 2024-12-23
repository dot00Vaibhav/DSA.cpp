// 701. Insert into a Binary Search Tree
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        if(root->val > val){//go left
            if(root->left == NULL){ // attach it here
                root->left = new TreeNode(val);
            }
            else insertIntoBST(root->left, val);
        }
        else{// root->val < val :- go right
            if(root->right == NULL){ // attach it here
                root->right = new TreeNode(val);
            }
            else insertIntoBST(root->right, val);
        }
        return root;
    }
};
int main(){
    return 0;
}