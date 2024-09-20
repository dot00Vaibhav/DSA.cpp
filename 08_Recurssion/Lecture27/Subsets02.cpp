//Print subsets of a string containing duplicate characters.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subsets(string ans,string original,vector<string>& v,int idx,bool flag){
    if(idx==original.size()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    if(original.size()==1){//taki neeche do conditions na chale
        if(flag==true) subsets(ans+ch,original,v,idx+1,true);
        subsets(ans,original,v,idx+1,true);
        return;
    }
    char dh = original[idx+1];
    if(ch==dh){//duplicate
        if(flag==true) subsets(ans+ch,original,v,idx+1,true);
        subsets(ans,original,v,idx+1,false);
    }else{//no duplicate
        if(flag==true) subsets(ans+ch,original,v,idx+1,true);
        subsets(ans,original,v,idx+1,true);
    }
}
int main(){
    string str="aab";
    vector<string> v;
    subsets("",str,v,0,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
//check the leetcode:90