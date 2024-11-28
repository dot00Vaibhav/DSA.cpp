// 105. Construct Binary Tree from Preorder and Inorder Traversal
#include<iostream>
#include<vector>
using namespace std;
class TreeNode{//This is a TreeNode
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
    TreeNode* build(vector<int>& pre, int preLo, int preHi, vector<int>& in, int inLo, int inHi){
        if(preLo > preHi) return NULL;
        TreeNode* root = new TreeNode(pre[preLo]);
        if(preLo == preHi) return root;
        int i = inLo;
        while(i<=inHi){
            if(in[i] == pre[preLo]) break;
            i++;
        }
        int leftCount = i-inLo;
        int rightCount = inHi-i;
        root->left = build( pre, preLo+1, preLo+leftCount, in, inLo, i-1);
        root->right = build( pre, preLo+leftCount+1, preHi, in, i+1, inHi);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        return build(pre,0,n-1,in,0,n-1);
    }
};
int main(){
    return 0;
}
//"Leetcode 106" is similar to this :- InOrder and PostOrder
//"Leetcode 889" is also similar to this :- PreOrder and PostOrder