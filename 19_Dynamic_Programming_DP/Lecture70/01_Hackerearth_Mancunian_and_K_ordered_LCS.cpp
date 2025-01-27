// Mancunian and K-Ordered LCS
#include<iostream>
#include<cstring>
#include<vector>
#define ll long long int
using namespace std;

ll dp[2005][2005][8];
ll f(string s1,string s2,int i,int j,int k){//korderedlcs
    if(i >= s1.size()) return 0;
    if(j >= s2.size()) return 0;

    if(dp[i][j][k] != -1) return dp[i][j][k];

    if(s1[i] == s2[j]){
        return dp[i][j][k] = 1+f(s1,s2,i+1,j+1,k);
    }
    else{//s1[i] == s2[j]
        if(k > 0){
            return dp[i][j][k] = max(1+f(s1,s2,i+1,j+1,k-1),max(f(s1,s2,i,j+1,k),f(s1,s2,i+1,j,k)));
        }
        else{//k <= 0
            return dp[i][j][k] = max(f(s1,s2,i,j+1,k),f(s1,s2,i+1,j,k));
        }
    }
}

int main(){
    // Initialize dp array
    memset(dp, -1, sizeof(dp));

    string s1,s2;
    cin>>s1>>s2;
    int k;
    cin>>k;
    f(s1,s2,0,0,k);
    return 0;
}