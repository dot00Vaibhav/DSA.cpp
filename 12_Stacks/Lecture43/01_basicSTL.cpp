#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // cout<<st.size()<<endl;

    st.push(10);//1
    st.push(20);//2
    st.push(30);//3
    // cout<<st.size()<<endl;//3
    // st.pop();//2
    // cout<<st.size()<<endl;//3
    // st.top();

    // // Printing in reverse order :- 

    // // (01) emptying the stack
    // // while(st.size()>0){
    // //     cout<<st.top()<<" ";
    // //     st.pop();
    // // }

    // // We will use extra stack 
    // stack<int> temp;
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     int x = st.top();
    //     st.pop();
    //     temp.push(x);
    // }

    // //putting element back from temp to st
    // while(temp.size()>0){
    //     int x = temp.top();
    //     temp.pop();
    //     st.push(x);
    // }
    // cout<<endl<<st.top()<<endl;

    // // We will use extra stack : for printing in bottom to top order.
    // stack<int> t;
    // while(st.size()>0){
    //     t.push(st.top());
    //     st.pop();
    // }

    // while(t.size()>0){
    //     int x = t.top();
    //     cout<<t.top()<<" ";
    //     t.pop();
    //     st.push(x);
    // }


    // stack<int> gt;
    // stack<int> rt;
    // while(st.size()){
    //     gt.push(st.top());
    //     st.pop();
    // }
    // while(gt.size()){
    //     cout<<gt.top()<<" ";
    //     rt.push(gt.top());
    //     gt.pop();
    // }
    // while(rt.size()){
    //     st.push(rt.top());
    //     rt.pop();
    // }
    
    return 0;
}