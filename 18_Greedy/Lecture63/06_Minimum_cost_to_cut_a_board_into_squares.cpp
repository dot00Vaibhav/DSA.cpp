#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
bool cmp(ll a, ll b){
    return a>b;
}

ll minCostTOBreakGrid(int n, int m, vector<ll> &X, vector<ll> &Y){
    sort(X.begin(),X.end(),cmp);//sort(X.rbegin(), X.rend())
    sort(Y.begin(),Y.end(),cmp);
    int hz = 1;//horizontal/Y block
    int vr = 1;//vertical/X block
    int h=0 , v=0;//pointers travel in horizontal/Y and X array
    ll ans = 0;
    while(h < Y.size() && v < X.size()){
        if(X[v] > Y[h]){
            ans += X[v]*vr;
            hz++;//vertical cut increases the horizontal block
            v++;
        }
        else{
            ans += Y[h]*hz;
            vr++;//horizontal cut increases the vertical block
            h++;
        }
    }
    while(h < Y.size()){
        ans += Y[h]*hz;
        vr++;
        h++;
    }
    while(v < X.size()){
        ans += X[v]*vr;
        hz++;
        v++;
    }
    return ans;
}
int main(){
    int n , m;
    cin>>m>>n;
    vector<ll> X, Y;
    for(int i=0;i<m-1;i++){
        ll x;
        cin>>x;
        X.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        ll x;
        cin>>x;
        Y.push_back(x);
    }
    cout<<minCostTOBreakGrid(n,m,X,Y)<<endl;
    return 0;
}