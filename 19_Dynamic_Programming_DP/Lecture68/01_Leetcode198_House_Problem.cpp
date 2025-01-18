// 198. House Robber
#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// public:
//     vector<int> dp;
//     int f(vector<int> arr,int i){
//         if(i >= arr.size()) return 0;
//         if(i == arr.size()-1) return arr[i];//single houses
//         if(i == arr.size()-2) return max(arr[i],arr[i+1]);//2 houses
//         if(dp[i] != -1) return dp[i];//ith state already computed
//         //if dp[i] was -1 so lets compute ith state for the first
//         return dp[i] = max(arr[i]+f(arr,i+2),f(arr,i+1));
//     }
//     int rob(vector<int>& nums) {
//         dp.clear();
//         dp.resize(105, -1);
//         return f(nums,0);
//     }
// };

// class Solution {
// public:
//     int f(vector<int> arr,int i,vector<int>& dp){
//         if(i >= arr.size()) return 0;
//         if(i == arr.size()-1) return arr[i];//single houses
//         if(i == arr.size()-2) return max(arr[i],arr[i+1]);//2 houses
//         if(dp[i] != -1) return dp[i];//ith state already computed
//         //if dp[i] was -1 so lets compute ith state for the first
//         return dp[i] = max(arr[i]+f(arr,i+2,dp),f(arr,i+1,dp));
//     }
//     int rob(vector<int>& nums) {
//         vector<int> dp;
//         dp.resize(105, -1);
//         return f(nums,0,dp);
//     }
// };

class Solution {
public:
    vector<int> dp;
    int ftd(vector<int> arr,int i){
        if(i >= arr.size()) return 0;
        if(i == arr.size()-1) return arr[i];//single houses
        if(i == arr.size()-2) return max(arr[i],arr[i+1]);//2 houses
        if(dp[i] != -1) return dp[i];//ith state already computed
        //if dp[i] was -1 so lets compute ith state for the first
        return dp[i] = max(arr[i]+ftd(arr,i+2),ftd(arr,i+1));
    }

    int fbu(vector<int> arr){
        int n = arr.size();
        if(n == 1) return arr[0];
        dp.clear();
        dp.resize(n);
        //base case
        dp[n-1] = arr[n-1];
        dp[n-2] = max(arr[n-1],arr[n-2]);
        for(int i=n-3;i>=0;i--){
            dp[i] = max(dp[i+1] , arr[i] + dp[i+2]);
        }
        return dp[0];
    }

    int fbu(vector<int> arr){//space optimized
        int n = arr.size();
        if(n == 1) return arr[0];
        //base case
        int a = arr[n-1];
        int b = max(arr[n-1],arr[n-2]);
        int c = b;
        for(int i=n-3;i>=0;i--){
            c = max(b ,a + arr[i]);
            a = b;
            b = c;
        }
        return c;
    }

    int rob(vector<int>& nums) {
        // dp.clear();
        // dp.resize(105, -1);
        // return ftd(nums,0);
        return fbu(nums);
    }
};

int main(){
    return 0;
}