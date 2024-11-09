//Level Order traversal using DFS 
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
void nthOrderLtoR(Node* a,int currL,int reqL){
    if(a == NULL) return;
    if(currL == reqL){
        cout<<a->val<<" ";
        return;
    }
    nthOrderLtoR(a->left,currL+1,reqL);
    nthOrderLtoR(a->right,currL+1,reqL);
}
void nthOrderRtoL(Node* a,int currL,int reqL){
    if(a == NULL) return;
    if(currL == reqL){
        cout<<a->val<<" ";
        return;
    }
    nthOrderRtoL(a->right,currL+1,reqL);
    nthOrderRtoL(a->left,currL+1,reqL);
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void levelOrderLtoR(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthOrderLtoR(root,1,i);
        cout<<endl;
    }
}
void levelOrderRtoL(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthOrderRtoL(root,1,i);
        cout<<endl;
    }
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

    nthOrderLtoR(a,1,3);
    cout<<endl;
    levelOrderLtoR(a);
    cout<<endl;
    levelOrderRtoL(a);
    return 0;
}