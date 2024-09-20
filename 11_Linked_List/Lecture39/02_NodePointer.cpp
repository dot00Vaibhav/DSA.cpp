#include<iostream>
using namespace std;
class Node{//Linked List Node
public:
    int val;
    Node* next;
    // Node* next = NULL;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void RECdisplay(Node* head){
    if(head == NULL) return;//Base case
    cout<<head->val<<" ";//kaam
    RECdisplay(head->next);//call
}
void reverseDisplay(Node* head){
    if(head == NULL) return;//base case 
    reverseDisplay(head->next);//call
    cout<<head->val<<" ";//kaam
}
int size(Node* head){//function to find the size of the linked list
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    cout<<"Size of the Linked list is "<<n;   
}
void display(Node* head){//function to display the linked list
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtend(Node* head,int val){
    Node* t = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = t;
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
    // cout<<a->next->next->next->val<<endl;    // a->next : next of the address present in the 'a' and the whole is equal to the 'b'

    // Node* temp = a;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    // display(a);

    RECdisplay(a);
    cout<<endl;
    size(a);
    cout<<endl;
    reverseDisplay(a);
    cout<<endl;
    insertAtend(a,800);
    display(a);
    return 0; 
}