#include<iostream>
using namespace std;
class Node{//Linked List Node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){//function to display the linked list
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* deleteNode(Node* head,Node* target){
    if(head==target){
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next!=target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;//this return is the starting of the linkedlist
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    head = deleteNode(head,a);
    display(head);
    return 0;
}   