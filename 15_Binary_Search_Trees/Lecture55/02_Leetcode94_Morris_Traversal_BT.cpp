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
//InOrder Traversal : Morris Traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode* pred = curr->left;
                while(pred->right!=NULL && pred->right != curr)
                    pred = pred->right;
                if(pred->right == NULL){//link
                    pred->right = curr;
                    curr = curr->left;
                }
                else{//pred->right == curr : Unlink
                    pred->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{//curr->left == NULL
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}