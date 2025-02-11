#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    #define ll long long int
        int n,m;
        vector<vector<ll>> grid,dp;
        int f(int i,int j){
            if(i == n-1 && j == m-1) return 1;
            if(i < 0 || j < 0 || i>=n || j>=m) return 0;
            if(grid[i][j] == 1) return 0;
            if(dp[i][j] != -1) return dp[i][j];
            return dp[i][j] = f(i+1,j) + f(i,j+1);
        }
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            // grid = obstacleGrid;
            n = obstacleGrid.size();
            m = obstacleGrid[0].size();
            dp.clear();
            // dp.resize(105,vector<int> (105,-1));
            dp.resize(105,vector<ll> (105,0));
            if(obstacleGrid[n-1][m-1] == 1) return 0;
            // return f(0,0);
    
            dp[n-1][m-1] = 1;
            for(int i=n-2;i>=0;i--){
                if(obstacleGrid[i][m-1] == 1) dp[i][m-1] = 0;
                else dp[i][m-1] = dp[i+1][m-1];
            }
            for(int i=m-2;i>=0;i--){
                if(obstacleGrid[n-1][i] == 1) dp[n-1][i] = 0;
                else dp[n-1][i] = dp[n-1][i+1];
            }
            for(int i=n-2;i>=0;i--){
                for(int j=m-1;j>=0;j--){
                    if(obstacleGrid[i][j] == 1) dp[i][j] = 0;
                    else dp[i][j] = dp[i+1][j] + dp[i][j+1];
                }
            }
            return dp[0][0];
        }
    };

int main(){
    return 0;
}