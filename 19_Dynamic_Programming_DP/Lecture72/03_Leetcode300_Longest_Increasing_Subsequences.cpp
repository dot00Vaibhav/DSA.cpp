#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> a;
    vector<int> dp;
    int f(int i){
        if(i == 0) return 1;

        if(dp[i] != -1) return dp[i];

        int ans = INT_MIN;
        for(int j = 0;j <= i-1;j++){
            if(a[i] > a[j]){
                ans = max(ans,f(j));
            }
        }

        if(ans == INT_MIN) return dp[i] = 1;
        return dp[i] = 1+ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        a = nums;
        dp.resize(2505,-1);
        dp[0] = 1;
        int ans = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     ans = max(ans,f(i));
        // }

        for(int i = 0;i < nums.size();i++){
            for(int j = 0;j <= i-1;j++){
                if(a[j] < a[i]){
                    dp[i] = max(dp[i],1+dp[j]);
                }
            }
            if(dp[i] == -1) dp[i] = 1;
            ans = max(ans,dp[i]);
        }

        return ans;
    }
};

int main(){
    return 0;
}