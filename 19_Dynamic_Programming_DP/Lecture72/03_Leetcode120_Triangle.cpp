#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution {
public:
    vector<vector<int>> dp;
    // int f(vector<vector<int>>& triangle,int r,int c){
    //     if(r == triangle.size()) return 0;

    //     if(dp[r][c] != -1) return dp[r][c];

    //     int ans = INT_MAX;
    //     ans = min(ans,triangle[r][c]+f(triangle,r+1,c));
    //     ans = min(ans,triangle[r][c]+f(triangle,r+1,c+1));
    //     return dp[r][c] = ans;
    // }
    vector<vector<int>> grid;
    int f(int r,int c){
        if(r == grid.size()-1){
            return grid[r][c];
        }
        if(dp[r][c] != -1) return dp[r][c];
        return dp[r][c] = grid[r][c] + min(f(r+1,c),f(r+1,c+1));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        grid = triangle;
        dp.clear();
        int row = grid.size();
        int col = triangle.back().size();
        dp.resize(205,vector<int> (col,-1));

        //base case
        for(int i = 0;i < grid.back().size();i++){
            dp[row-1][i] = grid[row-1][i];
        }
        for(int r = row-2;r >= 0;r--){
            for(int c = 0;c < grid[r].size();c++){
                // dp[r][c] = grid[r][c] + min(dp[r+1][c],dp[r+1][c+1]);
                dp[r][c] = grid[r][c] + min(dp[r+1][c],(c+1 < dp[r+1].size() ? dp[r+1][c+1] : INT_MAX));
            }
        }
        return dp[0][0];

        // return f(triangle,0,0);
        // return f(0,0);
    }
};


int main(){
    return 0;
}