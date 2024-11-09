#include<iostream>
#include<vector>
using namespace std;

//Method 01:-
class TreeNode{//This is a Tree Node
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
    void nthOrder(TreeNode* a,int currL,int reqL,vector<int>& v){
        if(a == NULL) return;
        if(currL == reqL){
            v.push_back(a->val);
            return;
        }
        nthOrder(a->left,currL+1,reqL,v);
        nthOrder(a->right,currL+1,reqL,v);
    }
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void lOrder(TreeNode* root,vector<vector<int>>& ans){
        int n = levels(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            nthOrder(root,1,i,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root,ans);
        return ans;
    }
};

//Method 02: it decreases the number of operations
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void lOrder(TreeNode* root,vector<vector<int>>& ans,int level){
        if(root==NULL) return;
        ans[level].push_back(root->val);
        lOrder(root->left,ans,level+1);
        lOrder(root->right,ans,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> v;
            ans.push_back(v);
        }
        lOrder(root,ans,0);
        return ans;
    }
};

int main(){
    return 0;
}