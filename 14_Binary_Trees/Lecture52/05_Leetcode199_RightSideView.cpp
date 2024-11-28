// 199. Binary Tree Right Side View
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

//Method : 01
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void nthOrderLtoR(TreeNode* root,int currL,int reqL, vector<int>& ans){
        if(root == NULL) return;//base case
        if(currL == reqL){
            ans[currL] = root->val;
            return;
        }
        nthOrderLtoR(root->left,currL+1,reqL,ans);//left
        nthOrderLtoR(root->right,currL+1,reqL,ans);//right
    }
    void levelOrderLtoR(TreeNode* root, vector<int>& ans){
        int n = ans.size();
        for(int i=0;i<n;i++){
            nthOrderLtoR(root,0,i,ans);
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        levelOrderLtoR(root,ans);
        return ans;
    }
};

//Method 02 :- using preorder
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void preorder(TreeNode* root, vector<int>& ans, int level){
        if(root==NULL) return;
        ans[level] = root->val;
        preorder(root->left,ans,level+1);
        preorder(root->right,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        preorder(root,ans,0);
        return ans;
    }
};
int main(){
    return 0;
}