// 113. Path Sum II
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

class Solution {//Space complexity is very bad.
public:
    void helper(TreeNode* root,vector<int> v,vector<vector<int>>& ans, int sum){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            if(root->val == sum){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left,v,ans,sum - (root->val));
        helper(root->right,v,ans,sum - (root->val));
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(root,v,ans,targetSum);
        return ans;
    }
};
int main(){
    return 0;
}