// 83. Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b!=NULL){
            while(b!=NULL && b->val==a->val){
                b = b->next;
            }
            a->next = b;
            //for next round
            a = b;
            if(b!=NULL) b = b->next;
        }
        return head;
    }

    // ListNode* deleteDuplicates(ListNode* head) {
    //     if (head == NULL || head->next == NULL) {
    //         return head;
    //     }
    //     ListNode* temp = head;
    //     while (temp->next != NULL) {
    //         ListNode* nextNode = temp->next;
    //         if (nextNode->val == temp->val) {
    //             temp->next = nextNode->next;
    //         } else {
    //             temp = temp->next;
    //         }
    //     }
    //     return head;
    // }
};

int main(){
    return 0;
}