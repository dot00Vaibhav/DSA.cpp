// 257. Binary Tree Paths
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

class Solution {
public:
    void helper(TreeNode* root,string s,vector<string>& ans){
        if(root == NULL) return;
        string a = to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            s += a;
            ans.push_back(s);
            return;
        }
        helper(root->left,s+a+"->",ans);
        helper(root->right,s+a+"->",ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
};
int main(){
    return 0;
}