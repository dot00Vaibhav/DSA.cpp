// 113. Path Sum II
#include<iostream>
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
    void helper(TreeNode* root, long long sum,int& count){
        if(root == NULL) return;
        if((long long)root->val == sum) count++;
        helper(root->left,sum - (long long)(root->val),count);
        helper(root->right,sum - (long long)(root->val),count);
    }
    int pathSum(TreeNode* root, int targetSum) {//to add the sums of every nodepath
        if(root == NULL) return 0;
        int count = 0;
        helper(root,(long long)targetSum,count);
        count += (pathSum(root->left,targetSum) + pathSum(root-> right,targetSum));
        return count;
    }
};
int main(){
    return 0;
}