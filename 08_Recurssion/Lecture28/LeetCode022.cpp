//Generate Parentheses.         [LeetCode-22]
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void parentheses(string str,int open,int close,int n){
    if(close==n){
        cout<<str<<endl;
        return;
    }
    if(open<n) parentheses(str+'(',open+1,close,n);
    if(close<open) parentheses(str+')',open,close+1,n);
}
int main(){
    int n = 3;
    parentheses("",0,0,n);
    return 0;
}