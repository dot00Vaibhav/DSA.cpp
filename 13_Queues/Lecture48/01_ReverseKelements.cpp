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
void reverseK(queue<int> &q,int k){
    stack<int> st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
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
    display(q);
    int k;
    cout<<"Reverse first ";
    cin>>k;
    reverseK(q,k);
    display(q);
    return 0;
}