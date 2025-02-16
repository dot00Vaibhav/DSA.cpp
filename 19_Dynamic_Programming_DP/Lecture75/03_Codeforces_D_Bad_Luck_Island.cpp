#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
#define ld long double
#define ll long long int
using namespace std;


ld dp[105][105][105];
ld fr(ll r,ll s,ll p){
    if(r == 0) return 0.0;
    if(s == 0) return 0.0;
    if(p == 0) return 1.0;

    if(dp[r][s][p] > -0.9) return dp[r][s][p];

    
    ld total = r*s + s*p + r*p;
    ld result = 0.0;
    result += fr(r-1,s,p)*((r*p)/total);
    result += fr(r,s-1,p)*((r*s)/total);
    result += fr(r,s,p-1)*((s*p)/total);

    return dp[r][s][p] = result;
}
ld fs(ll r,ll s,ll p){
    if(r == 0) return 1.0;
    if(s == 0) return 0.0;
    if(p == 0) return 0.0;

    if(dp[r][s][p] > -0.9) return dp[r][s][p];

    
    ld total = r*s + s*p + r*p;
    ld result = 0.0;
    result += fs(r-1,s,p)*((r*p)/total);
    result += fs(r,s-1,p)*((r*s)/total);
    result += fs(r,s,p-1)*((s*p)/total);

    return dp[r][s][p] = result;
}
ld fp(ll r,ll s,ll p){
    if(r == 0) return 0.0;
    if(s == 0) return 1.0;
    if(p == 0) return 0.0;

    if(dp[r][s][p] > -0.9) return dp[r][s][p];

    
    ld total = r*s + s*p + r*p;
    ld result = 0.0;
    result += fp(r-1,s,p)*((r*p)/total);
    result += fp(r,s-1,p)*((r*s)/total);
    result += fp(r,s,p-1)*((s*p)/total);

    return dp[r][s][p] = result;
}


int main(){
    ll r,s,p;
    cin>>r>>s>>p;
    
    memset(dp,-1.0,sizeof dp);
    ld ans_r = fr(r,s,p);
    memset(dp,-1.0,sizeof dp);
    ld ans_s = fs(r,s,p);
    memset(dp,-1.0,sizeof dp);
    ld ans_p = fp(r,s,p);

    cout<<fixed<<setprecision(12)<<ans_r<<" "<<ans_s<<" "<<ans_p;
    return 0;
}