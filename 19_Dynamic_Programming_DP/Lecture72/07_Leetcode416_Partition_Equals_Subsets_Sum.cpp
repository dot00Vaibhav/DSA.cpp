#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<vector<bool>> dp;
        // bool f(vector<int>& arr,int i,int k){
        //     if(k == 0) return true;
        //     if(i == arr.size()) return false;
        //     if(dp[i][k] != -1) return dp[i][k];
        //     if(arr[i] <= k){
        //         //we can include or exclude 
        //         return dp[i][k] = f(arr,i+1,k-arr[i]) || f(arr,i+1,k);
        //     }
        //     else{
        //         //always exclude
        //         return dp[i][k] = f(arr,i+1,k);
        //     }
        // }
        
        bool canPartition(vector<int>& nums) {
            int n = nums.size();
            dp.clear();
            // dp.resize(205,vector<int> (20005,-1));
            dp.resize(205,vector<bool> (20005,false));
            int s = 0;
            for(int i=0;i<nums.size();i++) s += nums[i];
            if(s%2 != 0) return false;
            // return f(nums,0,s/2);
    //buttom-up approach
            int k = s/2;
            dp[n][0] = true;
            for(int i = n-1;i >= 0;i--){
                for(int j = 0;j <= k;j++){
                    if(j == 0) dp[i][j] = true;
                    if(nums[i] <= j){
                        dp[i][j] = dp[i+1][j-nums[i]] || dp[i+1][j];
                    }else{
                        dp[i][j] = dp[i+1][j];
                    }
                }
            }
            return dp[0][k];
        }
    };

int main(){
    return 0;
}