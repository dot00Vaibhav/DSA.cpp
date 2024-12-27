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

//Method 01: did by me
// class Solution {
// public:
//     void preorder(TreeNode* root,vector<TreeNode*> &ans){
//         if(root==NULL) return;
//         ans.push_back(root);
//         preorder(root->left,ans);
//         preorder(root->right,ans);
//     }
//     void flatten(TreeNode* root) {
//         if(root==NULL) return;

//         vector<TreeNode*> ans;
//         preorder(root,ans);
        
//         TreeNode* temp = root;
//         for(int i=1;i<ans.size();i++){            
//             temp->left = NULL;
//             temp->right = ans[i];
//             temp = temp->right;
//         }
//         temp->left = NULL;
//         temp->right = NULL;
//     }
// };
// type 2: sir solution
// class Solution {
// public:
//     vector<TreeNode*> preorderTraversal(TreeNode* root) {
//         vector<TreeNode*> ans;
//         stack<TreeNode*> st;
//         if(root!=NULL) st.push(root);
//         while(st.size()>0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp);
//             if(temp->right) st.push(temp->right);
//             if(temp->left) st.push(temp->left);
//         }
//         return ans;
//     }
//     void flatten(TreeNode* root) {
//         if(root==NULL) return;
//         vector<TreeNode*> ans = preorderTraversal(root);
//         for(int i=0;i<ans.size()-1;i++){
//             ans[i]->left = NULL;
//             ans[i]->right = ans[i+1];
//         }
//     }
// };


// //Method 2: Recursively
// class Solution {
// public:
//     void flatten(TreeNode* root) {
//         if(root == NULL) return;
//         TreeNode* l = root->left;
//         TreeNode* r = root->right;
//         root->left = NULL;
//         root->right = NULL;
//         flatten(l);
//         flatten(r);
//         root->right = l;
//         TreeNode* temp = root;
//         while(temp->right!=NULL) temp = temp->right;
//         temp->right = r;
//     }
// };

//Method 3: Best method as SC=O(1) :- use of morris traversal
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                //save the right
                TreeNode* r = curr->right;
                curr->right = curr->left;
                //finding predecessor
                TreeNode* pred = curr->left;
                while(pred->right!=NULL) pred = pred->right;
                //linking
                pred->right = r;
                curr = curr->left;
            }
            else curr = curr->right;
        }
        TreeNode* temp = root;
        while(temp->right!=NULL){
            temp->left = NULL;
            temp = temp->right;
        }
    }
};

int main(){
    return 0;
}