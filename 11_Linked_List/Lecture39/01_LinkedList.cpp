//[01] Creation of link list
#include<iostream>
using namespace std;
class Node{//Linked List Node
public:
    int val;
    Node* next;//pointer datatype which stores the address of next node
    // Node* next = NULL;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){ 
    //10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming a linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // d.next = NULL;//called as base address but not required to write as the we have initialised in the constructor above!!
    cout<<(a.next)->val<<endl;//accessing the value of b using a.
    cout<<(a.next)->next->next->val<<endl;//accessing the value of d using a.
    Node temp = a;
    // while(temp.next != NULL){//accessing the list using while loop + the loop only iterates 3 times means it will not prints the value of the 'd' node b'coz the printing id done after checking the condition of loop.
    //     cout<<temp.val<<" ";//prints the value of temp using ".val"
    //     temp = *(temp.next);//it updates the value of teamp with the value of "temp" with the next address of the variable.
    // }
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
    return 0;
}