#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;

double dp[3005][3005];
double f(vector<double> &p,int i,int x){
    if(x == 0) return 1;//all heads are exhaust
    if(i == -1) return 0;//all coins are exhaust

    if(dp[i][x] > -0.9) return dp[i][x];//?

    return dp[i][x] = f(p,i-1,x-1)*p[i] + f(p,i-1,x)*(1 - p[i]);
}

int main(){
    int n;
    cin>>n;
    vector<double> p(n);
    for(int i = 0;i < n;i++){
        cin>>p[i];
    }
    memset(dp,-1,sizeof dp);
    cout<<fixed<<setprecision(9)<<f(p,n-1,(n+1)/2);
    return 0;
}