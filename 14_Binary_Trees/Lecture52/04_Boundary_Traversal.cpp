#include<iostream>
#include<queue>
using namespace std;
class Node{//This is a Tree Node
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* constructTree(int arr[],int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT8_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j != n && arr[j] != INT8_MIN) r = new Node(arr[j]);
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

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left == NULL) leftBoundary(root->right);
}
void leafNode(Node* root){
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}
void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    if(root->right == NULL) rightBoundary(root->left);
    rightBoundary(root->right);
    cout<<root->val<<" ";
}
void boundary(Node* root){
    leftBoundary(root);
    leafNode(root);
    rightBoundary(root->right);
}
int main(){
    //construct
    int arr[] = {1, 2, 3, 4, 5, INT8_MIN, 6, 7, INT8_MIN, 8, INT8_MIN, 9, 10, INT8_MIN, 11, INT8_MIN, 12, INT8_MIN, 13, INT8_MIN, 14, 15, 16, INT8_MIN, 17, INT8_MIN, INT8_MIN, 18, INT8_MIN, 19, INT8_MIN, INT8_MIN, INT8_MIN, 20, 21, 22, 23, INT8_MIN, 24, 25, 26, 27, INT8_MIN, INT8_MIN, 28, INT8_MIN, INT8_MIN};
    int n  = sizeof(arr)/sizeof(arr[0]);
    //converts the array into the binary tree
    Node* root = constructTree(arr,n);

    //Boundary Traversal
    boundary(root);
    return 0;
}