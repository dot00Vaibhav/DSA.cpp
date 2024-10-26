#include<iostream>
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

int maxInTree(Node* root){
    if(root == NULL) return INT8_MIN;
    int lMx = maxInTree(root->left);
    int rMx = maxInTree(root->right);
    return max(root->val,max(lMx,rMx));
}

int levels(Node* root){
    if(root == NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<maxInTree(a)<<endl;
    cout<<levels(a)<<endl;
    
    return 0;
}