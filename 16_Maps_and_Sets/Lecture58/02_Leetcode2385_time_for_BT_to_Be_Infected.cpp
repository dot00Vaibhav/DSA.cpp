// 2385. Amount of Time for Binary Tree to Be Infected
#include<iostream>
#include<queue>
#include<unordered_map>
#include<unordered_set>
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
    TreeNode* firstInf = NULL;
    void markParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent){
        if(root==NULL) return;
        if(root->left) parent[root->left] = root;
        if(root->right) parent[root->right] = root;
        markParent(root->left,parent);
        markParent(root->right,parent);
    }
    void find(TreeNode* root, int start){
        if(root==NULL) return;
        if(root->val==start){
            firstInf = root;
            return;
        }
        find(root->left,start);
        find(root->right,start);
    }
    int amountOfTime(TreeNode* root, int start) {
        find(root,start);
        unordered_map<TreeNode*, TreeNode*> parent;
        markParent(root,parent);
        unordered_set<TreeNode*> s;
        s.insert(firstInf);
        queue< pair<TreeNode*,int> > q;
        q.push({firstInf,0});
        int maxlevel = 0;
        // BFS
        while(q.size()>0){
            pair<TreeNode*,int> p = q.front();
            q.pop();
            int level = p.second;
            TreeNode* temp = p.first;
            maxlevel = max(maxlevel,level);
            if(temp->left){
                if(s.find(temp->left)==s.end()){
                    q.push({temp->left,level+1});
                    s.insert(temp->left);
                }
            }
            if(temp->right){
                if(s.find(temp->right)==s.end()){
                    q.push({temp->right,level+1});
                    s.insert(temp->right);
                }
            }
            if(parent.find(temp)!=parent.end()){
                if(s.find(parent[temp])==s.end()){
                    q.push({parent[temp],level+1});
                    s.insert(parent[temp]);
                }
            }
        }
        return maxlevel;
    }
};
int main(){
    return 0;
}