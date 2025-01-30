#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> dp;
//x = captain - assistant
int f(int arrC[],int arrA[],int n,int i,int x){
    if(dp[i][x] != -1) return dp[i][x];

    if(i == n) return 0;

    if(x == 0) return dp[i][x] = f(arrC,arrA,n,i+1,x+1) + arrA[i];//sare assistant ke pass apna captain ho to next pilot bhi assistant hi hoga
    else if(x == n-i) return dp[i][x] = f(arrC,arrA,n,i+1,x-1) + arrC[i];
    else return dp[i][x] = min(f(arrC,arrA,n,i+1,x+1) + arrA[i],f(arrC,arrA,n,i+1,x-1) + arrC[i]);
}

int main(){
    int n;
    cin>>n;
    int arrC[n],arrA[n];
    for(int i=0;i<n;i++){
        cin>>arrC[i]>>arrA[i];
    }
    cout<<(arrA[0] + f(arrC,arrA,n,1,1));
    return 0;
}