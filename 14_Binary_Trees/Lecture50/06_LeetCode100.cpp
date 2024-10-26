// 100. Same Tree
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;// this is for the same size ::- the only return true case for RST and LST
        if(p == NULL && q != NULL) return false;// when the size is different
        if(p != NULL && q == NULL) return false;// different sizes

        if(p->val != q->val) return false;

        bool LSTans = isSameTree(p->left,q->left);
        if(LSTans == false) return false;  // return false when left subtrees of both the p nd q are not same. :- this code is used to know where the LST of the both p and q are not same
        bool RSTans = isSameTree(p->right,q->right);
        if(RSTans == false) return false;  // return false when right subtrees of both the p nd q are not same.

        return true;
    }
};
int main(){
    return 0;
}