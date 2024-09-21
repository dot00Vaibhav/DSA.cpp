#include<iostream>
using namespace std;

class Node{  //DLL Node
public:
    int val;
    Node* next;
    Node* prev;  //extra for DLL
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;  //extra for DLL
    }
};   

class Deque{
public:
    Node* head;
    Node* tail;
    int s = 0;
    Deque(){
        head = tail = NULL;
        s = 0;
    }
    void pushBack(int val){
        Node* temp = new Node(val);
        if(s == 0){
            head = tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void pushFront(int val){
        Node* temp = new Node(val);
        if(s == 0){
            head = tail = temp;
        }else{
            temp->next = head;
            head = temp;
        }
        s++;
    }
    void popFront(){
        if(s == 0){
            cout<<"list is empty"<<endl;
            return;
        }
        head = head->next;
        s--;
    }
    void popBack(){
        if(s == 0){
            cout<<"list is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        s--;
    }
    void display(){
        Node* temp = head;
        while (temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
};

int main(){
    Deque dq;

    dq.popBack();

    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);

    dq.pushFront(40);
    dq.display();

    dq.pushBack(50);
    dq.pushFront(60);
    
    dq.display();
    dq.popFront();
    dq.display();
    return 0;
}