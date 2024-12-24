// 450. Delete Node in a BST
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
    TreeNode* iop(TreeNode* root){
        TreeNode* pred = root->left;
        while(pred->right!=NULL) pred = pred->right;
        return pred;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val == key){
            //case 1: 0 child nodes
            if(root->left == NULL && root->right==NULL){
                return NULL;
            }

            //case 2: 1 child nodes
            if(root->left == NULL || root->right==NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }

            //case 3: 2 child nodes
            if(root->left != NULL && root->right != NULL){
                //replace the root with its inorder predecessor/Sucessor
                // after replacing delete the predecessor / successor
                TreeNode* pred = iop(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);//this will delete the given key in this function and return the root node.
            }
        }
        else if(root->val > key){//go left
            root->left = deleteNode(root->left,key);
        }
        else root->right = deleteNode(root->right,key);//go right : root->val < key
        return root;
    }
};
int main(){
    return 0;
}