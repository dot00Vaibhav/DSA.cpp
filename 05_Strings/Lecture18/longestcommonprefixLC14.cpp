//[01] INPUT n STRINGS AND WRITE A PROGRAM TO FIND THE LONGEST COMMON PREFIX
//STRING OF ALL THE STRINGS.//
/*LeetCode :- 14*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string longestcommonprefix(vector<string> &v){
    int n = v.size();
    if(n == 1) return v[0];
    sort(v.begin(),v.end());//"flight" , "flow" , "flower"
    string first = v[0];
    string last = v[n-1];
    string s = "";
    for(int i=0;i<(min(first.size(),last.size()));i++){
        if(first[i] == last[i]) s += first[i];
        else return s;
    }
    return s;
}
int main(){
    // strs = ["flower","flow","flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    //lexographically :- in the order of the ascii value
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    string LC = longestcommonprefix(v);
    cout<<"The longest common prefix will be '"<<LC<<"'.";
}
