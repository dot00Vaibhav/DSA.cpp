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


void pushAtBottom(stack<int>& st, int val){
    stack<int> helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}


void pushAtGivenIdx(stack<int>& st,int idx,int val){
    stack<int> temp;
    while(st.size() > idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}


int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtBottom(st,80);
    print(st);
    pushAtGivenIdx(st,2,90);
    print(st);
    return 0;
}