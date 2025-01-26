#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > dp;
string ans = "";
int f(string &s1,string &s2,int i,int j,string output){
    if(output.size() > ans.size()) ans = output;
    if(i >= s1.size()) return 0;
    if(j >= s2.size()) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(s1[i] == s2[j]){//if equals the add the character
        return dp[i][j] = 1 + f(s1,s2,i+1,j+1,output+s1[i]);
    }else{//if not equals than does not include the character
        return dp[i][j] = max(f(s1,s2,i,j+1,output),f(s1,s2,i+1,j,output));
    }
}


// do this question usind bottom up approach
int main(){
    dp.clear();
    dp.resize(1005,vector<int> (1005,-1));
    string s1,s2;
    cin>>s1>>s2;
    f(s1,s2,0,0,"");
    cout<<ans<<" ";
    return 0;
}