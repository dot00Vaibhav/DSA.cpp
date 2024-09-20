#include<iostream>
using namespace std;

class Stack{//user defined data Structure
public:
    int arr[5];//for unlimited size we can use vector
    int idx;
    Stack(){
        idx = -1;
    }
    void push(int val){
        if(idx == ((sizeof(arr)/sizeof(arr[0]))-1)){
            cout<<"Stack is Full!!"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){ 
        if(idx == -1){
            cout<<"Stack is Empty!!"<<endl;
            return;
        }
        idx--;
    }
    int top(){ 
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st;
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // cout<<"Current Top : "<<st.top()<<" & Size = "<<st.size()<<endl;
    // st.pop();
    // cout<<"Current Top : "<<st.top()<<" & Size = "<<st.size()<<endl;
    st.display();
    return 0;
}