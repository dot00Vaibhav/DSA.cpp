#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void dfs(int city,vector<vector<int>>& isConnected,vector<bool>& visited){
        visited[city] = true;
        for(int neighbour = 0;neighbour < isConnected.size();neighbour++){
            if(isConnected[city][neighbour] == 1 && (!visited[neighbour])){//neighbour should not be visited
                dfs(neighbour,isConnected,visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n,false);
        int count = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,isConnected,visited);
                count++;
            }
        }
        return count;
    }
};

//solution of this question using DSU will need implementation of DSU separately

int main(){
    return 0;
}