// 160. Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int lenA = 0;
        while(tempA!=nullptr){
            lenA++;
            tempA = tempA->next;
        }
        int lenB = 0;
        while(tempB!=nullptr){
            lenB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if(lenA>lenB){
            int diff = lenA - lenB;
            for(int i=1;i<=diff;i++){
                tempA = tempA->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{ //lenA <= lenB
            int diff = lenB - lenA;
            for(int i=1;i<=diff;i++){
                tempB = tempB->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
    }
};
int main(){
    return 0;
}