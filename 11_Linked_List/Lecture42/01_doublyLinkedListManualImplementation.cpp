#include<iostream>
using namespace std;

class ListNode{  //DLL Node
public:
    int val;
    ListNode* next;
    ListNode* prev;  //extra for DLL
    ListNode(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;  //extra for DLL
    }
};

void display(ListNode* a){
    while(a){
        cout<<a->val<<" ";
        a=a->next;
    }
    cout<<endl;
}

void displayRec(ListNode* head){      // O(n) space complexity
    if(head == nullptr) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}

void displayRecReverse(ListNode* head){   // O(n) space complexity
    if(head == nullptr) return;
    displayRecReverse(head->next);
    cout<<head->val<<" ";
}

void displayRev(ListNode* tail){
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}

int main(){
    // 10 20 30 40 50
    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(50);
    // next connections
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // previous connection
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    
    display(a);
    // displayRecReverse(a);
    displayRev(e);
    return 0;
}