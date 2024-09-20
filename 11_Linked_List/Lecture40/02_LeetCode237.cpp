// 237. Delete Node in a Linked List
#include<iostream>
using namespace std;
class ListNode{//Linked List Node
public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(ListNode* head){//function to display the linked list
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
class Solution {
public:
    void deleteNode(ListNode* target) {
        target->val = target->next->val;
        target->next = target->next->next;
    }
};
int main(){
    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    ListNode* head = a;
    Solution s;
    s.deleteNode(d);
    display(a);
    return 0;
}