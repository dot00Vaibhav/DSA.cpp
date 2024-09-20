// 143. Reorder List
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
        ListNode* prev = NULL , *curr = head , *Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow is at the left middle / middle
        ListNode* b = reverseList(slow->next);
        ListNode* a = head;
        slow->next = NULL; // for breaking the list
        // merge these two - a and b alternatively
        ListNode* c = new ListNode(100);
        ListNode* tC = c;
        ListNode* tA = a;
        ListNode* tB = b;
        while(tA && tB){
            tC->next = tA;
            tA = tA->next;
            tC = tC->next;

            tC->next = tB;
            tB = tB->next;
            tC = tC->next;
        }
        tC->next = tA;
        head = c->next;
    }
};
int main(){
    return 0;
}