#include<iostream>
#include<string>
#include<vector>
#include<climits>
#define INF 1000000000
using namespace std;

vector<vector<int>> dp;
int f(string s,string t,int i,int j){
    if(i == s.size()) return INF;
    if(j == t.size()) return 1;

    if(dp[i][j] != -1) return dp[i][j];

    int opt1 = f(s,t,i+1,j);
    int k = -1;
    for(int a = i;a < s.size();a++){
        if(s[a] == t[i]){
            k = a;
            break;
        }
    }
    int opt2 = INF;
    if(k != -1) opt2 = 1 + f(s,t,i+1,j + k + 1);

    return dp[i][j] = min(opt1,opt2);
}

int main(){
    dp.clear();
    dp.resize(505,vector<int> (505,INT_MAX));
    string s,t;
    cin>>s>>t;
    int ans = f(s,t,0,0);
    cout<<((ans >= INF) ? -1 : ans);
    return 0;
}

//do this question again