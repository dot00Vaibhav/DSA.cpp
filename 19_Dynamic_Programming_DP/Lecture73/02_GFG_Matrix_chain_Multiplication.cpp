#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<vector<int>> dp;
int f(int i,int j,vector<int> &arr){
    if(i == j || i+1 == j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i+1;k < j;k++){
        ans = min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[j]*arr[k]);
    }
    return dp[i][j] = ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    dp.clear();
    // dp.resize(10005,vector<int> (1005,-1));
    dp.resize(10005,vector<int> (1005,0));
    for(int i=0;i<n;i++) cin>>v[i];


    for(int len = 3;len <= n;len++){
        for(int i=0;i+len-1 < n;i++){
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for(int k=i+1;k < j;k++){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]+v[i]*v[j]*v[k]);
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
    
    // cout<<f(0,n-1,v)<<endl;
    return 0;
}