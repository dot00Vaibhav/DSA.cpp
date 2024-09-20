// 876. Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        int midIdx = len/2;
        ListNode* mid = head;
        for(int i=0;i<midIdx;i++){
            mid = mid->next;
        }
        return mid;

//BUT interviewer wants to do it in one pass :-

        ListNode* slow = head;// Initialize slow pointer to the head of the list
        ListNode* fast = head;// Initialize fast pointer to the head of the list

        // Traverse the list with two pointers
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;// Move slow pointer one step forward
            fast = fast->next->next;// Move fast pointer two steps forward
        }
        return slow;// When fast pointer reaches the end, slow pointer will be at the middle
    }
};
int main(){

    return 0;
}