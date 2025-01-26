// Dice Combinations :- Your task is to count the number of ways to construct sum n by throwing a dice one or more times.
// Each throw produces an outcome between 1 and  6.
#include<iostream>
#include<vector>
#define mod 1000000007
#define ll long long int
using namespace std;

vector<ll> dp(1000006,-1);
// ll f(int n){
//     if(n == 0) return 1;
//     if(dp[n] != -1) return dp[n];
//     ll sum = 0;
//     for(int i=1;i<=6;i++){
//         if(i>n) break;
//         sum = (sum%mod + f(n-i)%mod)%mod;
//     }
//     return dp[n] = sum%mod;
// }


ll fbu(int n){
    dp[0] = 1;
    
    for(int k = 1;k <= n;k++){//filling dp array from left to right
        ll sum = 0;
        for(int i=1;i<=6;i++){
            if(k - i < 0) break;
            sum = (sum%mod + dp[k-i]%mod)%mod;
        }
        dp[k] = sum%mod;
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    // cout<<f(n)<<endl;
    cout<<fbu(n);
    return 0;
}