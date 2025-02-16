#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
    public:
        double dp[30][30][105];
        int dx[8] = {1,2,1,2,-1,-2,-1,-2};
        int dy[8] = {2,1,-2,-1,2,1,-2,-1};
        double f(int n,int i,int j,int k){
            if(i < 0 || j < 0 || i >= n || j >= n) return 0;
            if(k == 0) return 1;
    
            if(dp[i][j][k] > -0.9) return dp[i][j][k];
    
            double ans = 0.0;
            // ans += f(n,i+1,j+2,k-1)*(0.125);
            // ans += f(n,i+1,j-2,k-1)*(0.125);
            // ans += f(n,i+2,j+1,k-1)*(0.125);
            // ans += f(n,i+2,j-1,k-1)*(0.125);
            // ans += f(n,i-1,j+2,k-1)*(0.125);
            // ans += f(n,i-1,j-2,k-1)*(0.125);
            // ans += f(n,i-2,j+1,k-1)*(0.125);
            // ans += f(n,i-2,j-1,k-1)*(0.125);
    
            for(int m = 0;m < 8;m++){
                ans += f(n,i+dx[m],j+dy[m],k-1)*0.125;
            }
    
            return dp[i][j][k] = ans;
        }//also make bottom up solution
        double knightProbability(int n, int k, int row, int column) {
            memset(dp,-1,sizeof dp);
            return f(n,row,column,k);
        }
    };

int main(){
    return 0;
}