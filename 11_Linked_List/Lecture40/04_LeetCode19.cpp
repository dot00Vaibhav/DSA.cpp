// 19. Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        if(n==len){
            head = head->next;
            return head;
        }
        temp = head;
        //nth from end = (len-n+1)th from start
        int m = len - n + 1;
        int idx = m-1;//the index of the node to be deleted
        for(int i=1;i<=idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;

//What interviewer wants is :-

        ListNode* slow = head;
        ListNode* fast = head;

        //traverse fast (n+1) steps 
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast = fast->next;
        }
        //move slow and fast in same pace until fast will be equal to NULL
        while(fast!=nullptr){
            slow = slow->next;
            fast = fast->next;
        }
        //now the slow is exactly at left of the nth node from end
        slow->next = slow->next->next;
        return head;
    }
};
int main(){
    return 0;
}