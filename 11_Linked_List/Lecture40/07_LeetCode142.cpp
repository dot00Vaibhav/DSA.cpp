// 142. Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false; // No cycle
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                flag = true;
                break;
            }
        }
        if(flag == false) return NULL;
        else{
            ListNode* temp = head;
            while(temp!=slow){
                slow = slow->next;
                temp = temp->next;
            }
            return slow;
        }

// More faster approach for this question :-

        // ListNode* slow = head;
        // ListNode* fast = head;
        // while(fast!=NULL && fast->next!=NULL){
            
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if(slow == fast){
        //        slow = head;
        //        while(slow != fast){
        //         slow = slow->next;
        //         fast = fast->next;
        //        }
        //        return fast;
        //     } 
        // }
        // return NULL;
    }
};
int main(){
    return 0;
}