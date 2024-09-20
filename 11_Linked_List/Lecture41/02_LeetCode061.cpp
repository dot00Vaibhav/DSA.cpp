// 61. Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        //find the length of the list
        if(head==NULL || head->next==NULL) return head;
        int n = 0;// n is length
        ListNode* temp = head;
        ListNode* tail = NULL;
        while(temp!=NULL){
            if(temp->next==NULL) tail = temp;
            temp = temp->next;
            n++;
        }
        k = k%n;
        if(k==0) return head;
        //I have to place temp at (n-k)th position
        temp = head;
        for(int i = 1;i < n-k;i++){
            temp = temp->next;
        }
        tail->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
int main(){
    return 0;
}