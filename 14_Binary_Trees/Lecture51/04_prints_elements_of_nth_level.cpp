//Prints elements of nth level in a binary tree
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
void print(Node* a,int currL,int reqL){
    if(a == NULL) return;
    if(currL == reqL) cout<<a->val<<" ";
    print(a->left,currL+1,reqL);
    print(a->right,currL+1,reqL);
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

    print(a,1,3);
    return 0;
}