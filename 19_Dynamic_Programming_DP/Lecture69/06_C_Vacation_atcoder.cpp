#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int> > dp(n,vector<int> (3,0));

    //Base case
    int a,b,c;//a -> 0 , b -> 1 , c -> 2
    cin>>a>>b>>c;
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;

    for(int i=1;i<n;i++){
        //input of happiness the ith day
        cin>>a>>b>>c;
        //ith day a select krne pr
        dp[i][0] = a + max(dp[i-1][1],dp[i-1][2]);
        //ith day b select krne pr
        dp[i][1] = b + max(dp[i-1][0],dp[i-1][2]);
        //ith day c select krne pr
        dp[i][2] = c + max(dp[i-1][1],dp[i-1][0]);
    }

    cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    return 0;
}