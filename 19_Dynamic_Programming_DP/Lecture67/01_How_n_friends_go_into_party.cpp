// given n friends , each one can remain single or can be paired up
// with some other friend . Each friend can be paired only once. 
// Find Out the total number of ways in which friends can be paired up or remains single .

// Top - down approach
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> dp;
// int f(int n){
//     if(n == 1) return 1;
//     if(n == 2) return 2;
//     if(dp[n] != -1) return dp[n];
//     return dp[n] = f(n-1) + (n-1)*f(n-2);    
// }

// int main(){
//     int n;
//     cin>>n;
//     dp.resize(n+1,-1);
//     cout<<f(n)<<endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int f(int n){
    vector<int> dp(n+1, 0);
    
    // Base cases
    dp[1] = 1; // Only 1 way to handle 1 friend
    if (n > 1) dp[2] = 2; // Either pair them or keep them single
    
    // Fill the dp array
    for(int i = 3; i <= n; ++i){
        dp[i] = dp[i-1] + (i-1) * dp[i-2];
    }
    
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
