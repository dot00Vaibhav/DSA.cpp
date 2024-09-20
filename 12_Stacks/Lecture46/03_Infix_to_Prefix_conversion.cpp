#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // * , /
}
string solve(string val1, string val2, char ch){
    // we have to store prefix in the ans
    // prefix -> op val1 val2
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int main(){
    string s = "(7+9)*4/8-3";
    // we need 2 stacks , 1 for vals and 1 for ops
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        //check if s[i] is a digit (0-9)
        // int ascii = (int)(s[i]);//you dont need this thing as in cpp string is compared to integer with there ascii
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{// s[i] it is -> * , / , + , -, (, )
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    //work
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();//opening brackets ko bhi uda dena hai
            }
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else{ //priority(s[i]) <= priority(op.top())
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    // I have to do "val1 op val2"
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }

    }
    // the operator stack can have some values so make it empty.
    while(op.size()){
        //work
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}