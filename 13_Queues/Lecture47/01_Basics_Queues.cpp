#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseQueue(queue<int> &q){
    stack<int> st;
    //empty the queue into stack
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    //empty the stack into queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    //push
    //pop
    //front -> top
    //size , empty
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverseQueue(q);
    display(q);
    return 0;
}