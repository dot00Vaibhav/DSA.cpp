// 138. Copy List with Random Pointer
#include<iostream>
#include<unordered_map>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        //step 1 -> create the deep copy without random pointer
        Node* dummy = new Node(0);
        Node* tempC = dummy;
        Node* temp = head;
        while(temp){
            Node* a = new Node(temp->val);
            tempC->next = a;
            tempC = tempC->next;
            temp = temp->next;
        }
        Node* b = dummy->next;
        Node* a = head;
        //step 2 -> make a map of <original,duplicate>
        unordered_map<Node*,Node*> m;
        Node* tempA = a;//jo a mai travel karegaa
        Node* tempB = b;//jo b mai travel karegaa
        while(tempA!=NULL){
            m[tempA] = tempB;
            tempA = tempA->next;
            tempB = tempB->next;
        }
        //step 3 : find original random and then his map, then the map is the value of duplicate random
        for(auto x : m){
            Node* ori = x.first;
            Node* dup = x.second;
            if(ori->random != NULL){//kaam
                Node* oRandom = ori->random;
                // dup->random = m[oRandom];
                Node* dRandom = m[oRandom];
                dup->random = dRandom;
            }
        }
        return b;
    }
};
int main(){
    return 0;
}