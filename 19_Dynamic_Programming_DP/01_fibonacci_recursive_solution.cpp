// //Top - Down Approach
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> dp;

// int f(int n){
//     if(n == 0 or n == 1) return n;
//     //dp check, to identigy if the problem is solved earlier
//     if(dp[n] != -1) return dp[n];
//     return dp[n] = f(n-1) + f(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     dp.clear();
//     dp.resize(n+1,-1);//dp[i] == -1 -> that ith subproblem is not yet computed
//     cout<<f(n)<<endl;
//     return 0;
// }


//Bottom - Up Approach
#include<iostream>
#include<vector>
using namespace std;

// vector<int> dp;

// int f(int n){
//     dp.clear();
//     dp.resize(n+1,-1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i = 2;i<=n;i++){
//         dp[i] = dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

//to improve the space complexity

int f(int n){
    int a = 0;
    int b = 1;
    int i = 2;
    int c;
    while(i <= n){
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}