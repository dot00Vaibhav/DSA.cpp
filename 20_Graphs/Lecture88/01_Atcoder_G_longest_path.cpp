#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> graph;
int dp[100005];
int findLongestPath(int src){
    if(dp[src] != -1) return dp[src];

    bool leaf = 1;
    int maxValue = 0;

    for(int child: graph[src]){
        leaf = 0;
        maxValue = max(maxValue, findLongestPath(child));
    }

    return dp[src] = leaf ? 0 : 1 + maxValue;
}


int main(){
    memset(dp, -1, sizeof(dp));
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
    }
    return 0;
}