// 21. Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // (1):- With Extra Space - SC = O(m+n)
        ListNode* tempA = list1;
        ListNode* tempB = list2;
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        while(tempA!=NULL && tempB!=NULL){
            if(tempA->val<=tempB->val){
                ListNode* t = new ListNode(tempA->val);
                tempC->next = t;
                tempC = t;
                tempA = tempA->next;
            }
            else{
                ListNode* t = new ListNode(tempB->val);
                tempC->next = t;
                tempC = t;
                tempB = tempB->next;
            }
        }
        if(tempA==NULL){
            tempC->next = tempB;
        }else{// tempB==NULL
            tempC->next = tempA;
        }
        return c->next;


    // (2) :- WithOut Extra Space :- O(1)
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
        }
        if(list1==NULL){
            temp->next = list2;
        }else{
            temp->next = list1;
        }
        return c->next;



    //One of the Optimal Solution on the LeetCode
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }
        ListNode* solution;
        if (list1->val <= list2->val) {
            solution = list1;
            list1 = list2;
        } else {
            solution = list2;
        }

        ListNode* s = solution;
        while (s->next != nullptr) {
            if (list1 == nullptr) {
                return solution;
            }
            if (list1->val < s->next->val) {
                ListNode* tmp = s->next;
                s->next = list1;
                list1 = tmp;
            } else {
                s = s->next;
            }
        }
        s->next = list1;
        return solution;
    }
};
int main(){
    return 0;
}