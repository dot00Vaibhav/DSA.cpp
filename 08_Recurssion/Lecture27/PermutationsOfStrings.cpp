//Finding all permutations of an string given all elements of the string are unique.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutations(string ans,string original,vector<string>& v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.size();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutations(ans+ch,left+right,v);
    }
}
int main(){
    string str = "abc";
    vector<string> v;
    permutations("",str,v);
    for(string ele : v) cout<<ele<<endl;
    return 0;
}