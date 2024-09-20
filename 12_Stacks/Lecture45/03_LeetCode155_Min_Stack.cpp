// 155. Min Stack
#include<iostream>
#include<stack>
#include<climits>
using namespace std;
//Method - 02 :
class MinStack {
public:
    stack<int> st;
    stack<int> helper;
    MinStack() {  //constructor
        
    }
    
    void push(int val) {
        st.push(val);
        if(helper.size()==0 || val<helper.top()){
            helper.push(val);
        }else helper.push(helper.top());
    }
    
    void pop() {
        st.pop();
        helper.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return helper.top();
    }
};



//Method - 03 :
class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() {  //constructor
        min = LLONG_MAX;
    }
    
    void push(int val) {//O(1)
        long long x = (long long) val;//typecasting
        if(st.size()==0){
            st.push(x);
            min = x;
        }
        else if(x>=min) st.push(x);
        else{   //x < min
            st.push(2*x - min);
            min = x;
        }
    }
    
    void pop() {//O(1)
        if(st.top()<min){  //st.top() < min : A fake value is present
                // before popping make sure to retrieve old minimum
            long long oldMin = 2*min - st.top();
            min = oldMin;
        }
        st.pop();
    }
    
    int top() {//O(1)return st.top();
        if(st.top()<min) return (int)(min);
        else return (int)(st.top());
    }
    
    int getMin() {
        return (int)(min);
    }
};
int main(){
    return 0;
}