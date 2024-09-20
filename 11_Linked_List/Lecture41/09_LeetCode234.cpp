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
        ListNode* prev = NULL , *curr = head , *Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    // bool isPalindrome(ListNode* head) {
    //     ListNode* c = new ListNode(10);
    //     // deep copy of head
    //     ListNode* temp = head;
    //     ListNode* tempC = c;
    //     while(temp){
    //         ListNode* node = new ListNode(temp->val);
    //         tempC->next = node;
    //         temp = temp->next;
    //         tempC = tempC->next;
    //     }
    //     c = c->next;
    //     c = reverseList(c);
    //     ListNode* a = head;
    //     ListNode* b = c;
    //     while(a){
    //         if(a->val != b->val) return false;
    //         a = a->next;
    //         b = b->next;
    //     }
    //     return true;
    // }


    bool isPalindrome(ListNode* head){
        //if the first half and second half are reverse of each other then it is a palindrome 
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow is at the left middle / middle
        ListNode* newHead = reverseList(slow->next);
        ListNode* a = head;
        ListNode* b = newHead;
        while(b){
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};
int main(){
    return 0;
}