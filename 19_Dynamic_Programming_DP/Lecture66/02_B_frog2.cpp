// // B - Frog 2 : Brute force solution : top-down solution
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> h;
// int k;

// int f(int i){
//     if(i >= h.size()) return INT8_MAX;
//     if(i == h.size()-1){
//         //last stone
//         return 0;
//     }
//     int ans = INT8_MAX;
//     for(int j = 1;j <= k;j++){
//         if((i+j) >= h.size()) break;
//         ans  = min(ans, (f(i+j) + abs(h[i] - h[i+j])));
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n >> k;
//     h.resize(n);
//     for(int i = 0;i<n;i++) cin>>h[i];
//     cout<<f(0)<<endl;
//     return 0;
// }



// B - Frog 2 : applying DP in the Brute force solution : (1) top - down solution (2) bottom - up approach
#include<iostream>
#include<vector>
using namespace std;

vector<int> h;
int k;
vector<int> dp;
//top - down approach
int f(int i){
    if(i >= h.size()) return INT8_MAX;
    if(i == h.size()-1){
        //last stone
        return 0;
    }
    if(dp[i] != -1) return dp[i];
    int ans = INT8_MAX;
    for(int j = 1;j <= k;j++){
        if((i+j) >= h.size()) break;
        ans  = min(ans, (f(i+j) + abs(h[i] - h[i+j])));
    }
    return dp[i] = ans;
}

// bottom - up Approach
int fbu(){//TC = O(nk) SC = O(n)
    int n = h.size();
    //base case 
    dp.resize(100005,INT8_MAX);
    dp[n-1] = 0;//cost for last stone to last stone
    for(int i = n-2;i >= 0;i--){
        for(int j = 1;j <= k;j++){
            if(i+j >= n) break;
            dp[i] = min(dp[i],dp[i+j] + abs(h[i] - h[i+j]));
        }
    }
    return dp[0];
}

int main(){
    int n;
    cin >> n >> k;
    h.resize(n);
    // dp.resize(n,-1);//dp[i] == -1 means ith state not yet computed
    for(int i = 0;i<n;i++) cin>>h[i];
    // cout<<f(0)<<endl;
    cout<<fbu()<<endl;
    return 0;
}

// similar question B frog 1 : here the K value is 2 only;


