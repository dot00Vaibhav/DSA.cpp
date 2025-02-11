#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int N,M;
    vector<vector<int>> dp;
    int f(int i,int j){
        if(i == N-1 && j == M-1) return 1;
        if(i>=N || j>=M || i<0 || j<0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        return dp[i][j] = f(i+1,j) + f(i,j+1);
    }
    int uniquePaths(int m, int n) {
        N = n;
        M = m;

        dp.clear();
        dp.resize(105,vector<int> (105,-1));

        return f(0,0); 
    }
};

int main(){
    return 0;
}