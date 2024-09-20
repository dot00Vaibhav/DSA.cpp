//[01] Given two strings s and t,determine if they are isomorphic.
/*LeetCode :- 205*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isIsomorphic(string s, string t) {
    if(s.length()!=t.length()) return false;
    vector<int> v(150,1000);
    for(int i=0;i<s.length();i++){
        int idx = (int)s[i];
        if(v[idx] == 1000) v[idx] = s[i] - t[i];
        else if(v[idx] != (s[i] - t[i])) return false;
    }
    //emptying the vector
    for(int i=0;i<150;i++){
        v[i] = 1000;
    }
    for(int i=0;i<s.length();i++){
        int idx = (int)t[i];
        if(v[idx] == 1000) v[idx] = t[i] - s[i];
        else if(v[idx] != (t[i] - s[i])) return false;
    }
    return true;
}
int main(){
    string s;
    cout<<"string 1 : ";
    getline(cin,s);
    string t;
    cout<<"string 2 : ";
    getline(cin,t);
    bool b = isIsomorphic(s,t);
    cout<<endl;
    cout<<"string '"<<s<<"' and '"<<t<<"' are "<<b<<".";
    return 0;
}