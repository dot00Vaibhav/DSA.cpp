// 98. Validate Binary Search Tree
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
//     long long MaxTree(TreeNode* root){
//         if(root == NULL) return LLONG_MIN;
//         return max((long long)(root->val),max(MaxTree(root->left),MaxTree(root->right)));
//     }
//     long long MinTree(TreeNode* root){
//         if(root == NULL) return LLONG_MAX;
//         return min((long long)(root->val),min(MinTree(root->left),MinTree(root->right)));
//     }
//     bool isValidBST(TreeNode* root) {
//         if(root == NULL) return true;
//         else if((long long)(root->val) <= MaxTree(root->left)) return false;
//         else if((long long)(root->val) >= MinTree(root->right)) return false;
//         return isValidBST(root->left) && isValidBST(root->right);
//     }
// };

// class Solution { TC : O(n) SC : O(n)
// public:
//     void helper(TreeNode* root, vector<int>& ans){
//         if(root == NULL) return;// base case
//         helper(root->left,ans);//call 1
//         ans.push_back(root->val);// work
//         helper(root->right,ans);//call 2
//     }
//     bool isValidBST(TreeNode* root) {
//         vector<int> ans;
//         helper(root,ans);
//         for(int i=1;i<ans.size();i++){
//             if(ans[i]<=ans[i-1]) return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
    void helper(TreeNode* root,TreeNode* &prev,bool &flag){
        if(root == NULL) return;
        helper(root->left,prev,flag);
        if(prev!=NULL){
            if(root->val <= prev->val){
                flag = false;
                return;
            }
        }
        prev = root;
        helper(root->right,prev,flag);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        bool flag = true;
        helper(root,prev,flag);
        return flag;
    }
};
int main(){
    return 0;
}