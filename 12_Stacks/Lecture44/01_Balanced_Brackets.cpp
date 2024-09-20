#include<iostream>
#include<stack>
using namespace std;
bool is_Balanced_Now(string s){
    if(s.length()%2 != 0) return false;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(') st.push(s[i]);
        else{  //s[i] == ')'
            if(st.size() == 0) return false;
            else st.pop();
        } 
    }
    if(st.size() == 0) return true;
    return false;
}
int main(){
    string s = "()()()";
    cout<<is_Balanced_Now(s);
    return 0;
}