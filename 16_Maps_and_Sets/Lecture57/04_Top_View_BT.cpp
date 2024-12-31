//top view of the binary tree
#include<iostream>
#include<queue>
#include<unordered_map>
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

//level order traversal of the binary tree to print the nodes from left to right
int levels(TreeNode* root){
    if(root == NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nthOrderLtoR(TreeNode* a,int currL,int reqL){
    if(a == NULL) return;
    if(currL == reqL){
        cout<<a->val<<" ";
        return;
    }
    nthOrderLtoR(a->left,currL+1,reqL);
    nthOrderLtoR(a->right,currL+1,reqL);
}
void levelOrderLtoR(TreeNode* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthOrderLtoR(root,1,i);
        cout<<endl;
    }
}

//construct the binary tree from the array
TreeNode* constructTree(int arr[],int n){
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i] != INT8_MIN) l = new TreeNode(arr[i]);
        else l = NULL;
        if(j != n && arr[j] != INT8_MIN) r = new TreeNode(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}



//top view of the binary tree
void topView(TreeNode* root){
    unordered_map<int, int> m;
    queue< pair<TreeNode* , int> > q;
    q.push({root,0});//root and level :- this can be declared as : pair<TreeNode*,int> p; p.first = root; p.second = 0;
    while(q.size()>0){
        TreeNode* temp = (q.front()).first;//access the first element
        int level = (q.front()).second;
        //queue se nikal do
        q.pop();
        if(m.find(level)==m.end()){//if the level is not present in the map then add it to the map
            m[level] = temp->val;
        }
        //check for left and right child
        if(temp->left != NULL){
            pair<TreeNode* , int> L;
            L.first = temp->left;
            L.second = level-1;
            q.push(L);
        }
        if(temp->right != NULL){
            pair<TreeNode* , int> R;
            R.first = temp->right;
            R.second = level+1;
            q.push(R);
        }
    }
    //find the minimum and maximum level
        int minlevel = INT8_MAX;
        int maxlevel = INT8_MIN;
        //iterate over the map to get the minimum and maximum level
        for(auto x : m){
            int lvl = x.first;
            minlevel = min(minlevel,lvl);
            maxlevel = max(maxlevel,lvl);
        }
        for(int i=minlevel;i<=maxlevel;i++){
            cout<<m[i]<<" ";//it give the nodes of the top view present in the map
        }
        cout<<endl;//this is for the next level
}
int main(){
    //construct
    int arr[] = {1, 2, 3, 4, 5, INT8_MIN, 6, INT8_MIN, INT8_MIN, 7, 8};
    int n  = sizeof(arr)/sizeof(arr[0]);
    //converts the array into the binary tree
    TreeNode* root = constructTree(arr,n);

    //level order traversal
    levelOrderLtoR(root);
    //top view of the binary tree
    topView(root);
    return 0;
}