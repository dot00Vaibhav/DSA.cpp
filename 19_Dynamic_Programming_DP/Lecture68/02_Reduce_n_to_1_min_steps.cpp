#include<iostream>
#include<vector>
#define infinity INT8_MAX
using namespace std;

int f(int n){
    if(n==1) return 0;
    if(n == 2 && n == 3) return 1;
    return 1+min(f(n-1) ,min((n%2 == 0) ? f(n/2):infinity ,(n%3 == 0) ? f(n/3):infinity));
}

vector<int> dp;
int ftd(int n){
    if(n==1) return 0;
    if(n == 2 && n == 3) return 1;
    if(dp[n] != -1) return dp[n];//nth state is precomputed
    //if dp[n] is -1 , we need to compute first time this state
    return dp[n] = 1+min(ftd(n-1) ,min((n%2 == 0) ? ftd(n/2):infinity ,(n%3 == 0) ? ftd(n/3):infinity));
}
int fbu(int n){
    dp.clear();
    dp.resize(n+1,-1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i = 4;i<n+1;i++){
        dp[i] = 1 + min(dp[i-1],min((i%2 == 0) ? dp[i/2] : infinity,(i%3 == 0) ? dp[i/3] : infinity));
    }
    return dp[n];
}

int main(){//n -> 1000
    int n;
    cin>>n;
    // cout<<f(n);
    dp.clear();
    dp.resize(1005,-1);
    cout<<ftd(n)<<endl;
    cout<<fbu(n)<<endl;
    return 0;
}