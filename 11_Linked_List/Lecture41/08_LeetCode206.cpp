// 206. Reverse Linked List
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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    //Iterative Method :- 
        // ListNode* prev = NULL , *curr = head , *Next = head;
        // while(curr){
        //     Next = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = Next;
        // }
        // return prev;


    //Recursive Method:
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};
int main(){
    return 0;
}