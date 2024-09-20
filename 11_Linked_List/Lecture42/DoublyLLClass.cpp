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

class Linkedlist{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size = 0;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);//now temp points to the location of new node with value val
        if(size == 0){
            head = tail = temp;//here head and tail will points to the same location or can say have same value. And forms the Linkedlist of size one.
        }else{
            tail->next = temp;//now when there is already nodes are present in the linkedlist so the location of the next of tail will points to the location of node that has to be added.
            tail = temp;// by doing this tail will points to the location of the new node.
        }
        size++;//this will increase the size
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }else{
            temp->next = head;
            head = temp;
        }
        size++;
    }void insertAtIdx(int idx,int val){
        if(idx < 0 || idx > size)   cout<<"Invalid Index";
        else if(idx==0) insertAtHead(val);
        else if(idx==size)  insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=0;i< idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx < 0 || idx > size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0){
            return head->val;
        }
        else if(idx==size){
            return tail->val;
        }else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        if(idx < 0 || idx > size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0;i< idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while (temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    return 0;
}