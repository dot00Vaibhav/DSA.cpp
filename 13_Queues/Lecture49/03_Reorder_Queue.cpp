#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reorder(queue<int>& q){
    stack<int>st;
    // pop first half of q into st
    int n = q.size();
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // empty the st into q
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    // pop 2nd half (now the first half) of the q to st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // Most important step (interleave one by one)
    while(st.size()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // reverse the queue using stack
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
    return 0;
}