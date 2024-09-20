#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    // We will use extra stack 
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    //putting element back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}


void displayRevREC(stack<int>& st){
    if(st.size() == 0) return;
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    displayRevREC(st);
    st.push(x);
}


void displayREC(stack<int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    displayREC(st);
    cout<<x<<" ";
    st.push(x);
}


void pushAtBottom(stack<int>& st,int val){
    if(st.size() == 0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}


void recursiveReversing(stack<int>& st){
    if(st.size() == 1) return;
    int x = st.top();
    st.pop();
    recursiveReversing(st);
    pushAtBottom(st,x);
    // st.push(x);
}


int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // displayRevREC(st);
    // cout<<endl;
    // displayREC(st);
    // cout<<endl;
    // pushAtBottom(st,-10);
    // print(st);
    recursiveReversing(st);
    print(st);
    return 0;
}