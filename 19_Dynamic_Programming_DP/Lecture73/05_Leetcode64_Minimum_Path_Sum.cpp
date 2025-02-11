#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
    public:
        int n,m;
        vector<vector<int>> arr,dp;
        int f(int i,int j){
            if(i == n-1 && j == m-1) return arr[n-1][m-1];
            if(i >= n || j >= m || i < 0 || j < 0) return INT_MAX;
    
            if(dp[i][j] != -1) return dp[i][j];
    
            return dp[i][j] = arr[i][j] + min(f(i+1,j),f(i,j+1));
        }
        int minPathSum(vector<vector<int>>& grid) {
            arr = grid;
            n = arr.size();
            m = arr[0].size();
            dp.clear();
            // dp.resize(205,vector<int> (205,-1));
            // return f(0,0);
            dp.resize(205,vector<int> (205,0));
            dp[n-1][m-1] = arr[n-1][m-1];
            for(int i=n-2;i>=0;i--){
                dp[i][m-1] = arr[i][m-1] + dp[i+1][m-1];
            }
            for(int i=m-2;i>=0;i--){
                dp[n-1][i] = arr[n-1][i] + dp[n-1][i+1];
            }
            for(int i=n-2;i>=0;i--){
                for(int j=m-2;j>=0;j--){
                    dp[i][j] = arr[i][j] + min(dp[i+1][j] , dp[i][j+1]);
                }
            }
            return dp[0][0];
        }
};

int main(){
    return 0;
}