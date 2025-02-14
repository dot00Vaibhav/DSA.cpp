#include<iostream>
#include<vector>
#include<climits>
#include<cstring>
using namespace std;

#define ll long long int
class Solution {
public:
    ll n,m;//dimensions of the input matrix
    vector<vector<int>> mat;
    ll dp[55][55][55];

    ll f(ll i,ll j,ll x,ll y){

        if(i > n || j > m || x > n || y > m || mat[i][j] == -1 || mat[x][y] == -1) return INT_MIN;
        if(i == n && j == m){// is the tourist 1 already at n , m (i+j) == (n+m)
            return mat[i][j] == 1;//this returns 1 if condition is true
        }
        
        if(dp[i][j][x] != -1) return dp[i][j][x];

        ll result = INT_MIN;
        result = max(result,f(i+1,j,x+1,y));
        result = max(result,f(i+1,j,x,y+1));
        result = max(result,f(i,j+1,x+1,y));
        result = max(result,f(i,j+1,x,y+1));

        if(result == INT_MIN) return dp[i][j][x] = result;

        result += (mat[i][j] == 1);//return 1 is 1 is present o/w 0
        result += (mat[x][y] == 1);

        //remove repition
        if(i == x && j == y && mat[i][j] == 1) result--;

        return dp[i][j][x] = result;

    }

    int cherryPickup(vector<vector<int>>& grid) {
        m = (ll)grid.size();
        n = (ll)grid.size();
        // dp.clear();
        memset(dp,-1,sizeof dp);
        mat.clear();
        mat.resize(55,vector<int> (55,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i+1][j+1] = grid[i][j];
            }
        }
        int ans = f(1,1,1,1);
        return (ans == INT_MIN ? 0 : ans);
    }
};

int main(){
    return 0;
}