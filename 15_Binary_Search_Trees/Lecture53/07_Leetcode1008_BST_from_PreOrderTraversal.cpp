// 1008. Construct Binary Search Tree from Preorder Traversal
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

// class Solution {
// public:
//     TreeNode* build(vector<int>& pre, int preLo, int preHi, vector<int>& in, int inLo, int inHi){
//         if(preLo > preHi) return NULL;
//         TreeNode* root = new TreeNode(pre[preLo]);
//         if(preLo == preHi) return root;
//         int i = inLo;
//         while(i<=inHi){
//             if(in[i] == pre[preLo]) break;
//             i++;
//         }
//         int leftCount = i-inLo;
//         int rightCount = inHi-i;
//         root->left = build( pre, preLo+1, preLo+leftCount, in, inLo, i-1);
//         root->right = build( pre, preLo+leftCount+1, preHi, in, i+1, inHi);
//         return root;
//     }
//     TreeNode* bstFromPreorder(vector<int>& pre) {
//         vector<int> in = pre;//copy of the pre 
//         sort(in.begin(),in.end());
//         int n = pre.size();
//         return build(pre,0,n-1,in,0,n-1);
//     }
// };


//Better Mehtod : 
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
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* root = new TreeNode(pre[0]);
        for(int i=1;i<pre.size();i++){
            insertIntoBST(root,pre[i]);
        }
        return root;
    }
};
int main(){
    return 0;
}