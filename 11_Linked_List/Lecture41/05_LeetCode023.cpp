// 23. Merge k Sorted Lists
#include<iostream>
#include<vector>
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
    ListNode* merge(ListNode* list1, ListNode* list2) {
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
    }
   //Method 01 :- 
    ListNode* mergeKLists01(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a = lists[lists.size()-1];
            lists.pop_back();
            ListNode* b = lists[lists.size()-1];
            lists.pop_back();
            ListNode* c = merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }


//Method 02 :-

    ListNode* mergeKLists02(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a = lists[0];
            lists.erase(lists.begin());
            ListNode* b = lists[0];
            lists.erase(lists.begin());
            ListNode* c = merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};
int main(){
    return 0;
}