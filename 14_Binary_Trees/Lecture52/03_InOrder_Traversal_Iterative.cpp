#include<iostream>
#include<vector>
#include<stack>
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

//Iterative Method
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* node = root;
        while(st.size()>0 || node!=NULL){
            if(node!=NULL){
                st.push(node);
                node = node->left;
            }else{// node is null
                TreeNode* temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                node = temp->right;
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}