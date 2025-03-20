#include<bits/stdc++.h>
using namespace std;


//Mthod 1: using DFS
// class Solution {
// public:

//     void dfs(vector<vector<int>>& stones, int index, vector<bool>& visited){
//         visited[index] = true;//mark the current element

//         for(int i = 0; i<stones.size(); i++){
//             int r = stones[index][0];//curr row
//             int c = stones[index][1];//curr col

//             if((visited[i] == false) && (stones[i][0] == r || stones[i][1] == c)){
//                 dfs(stones,i,visited);
//             }
//         }
//     }

//     int removeStones(vector<vector<int>>& stones) {
//         int n = stones.size();

//         vector<bool> visited(n, false);

//         int group = 0;

//         for(int i=0;i<n;i++){
//             if(visited[i] == true) continue;//skip

//             dfs(stones,i,visited);
//             group++;
//         }

//         return n - group;
//     }
// };



//using DSU
class Solution {
public:

//S.C. = O(n)
    vector<int> parent;
    vector<int> rank;
    int n;

    int find(int i){
        if(parent[i] != i){
            parent[i] = find(parent[i]);
        }
        return parent[i];
    }

    void Union(int i, int j){
        int a = find(i);
        int b = find(j);

        if(a != b){
            if(rank[a] > rank[b]){
                parent[b] = a;
            }
            else if(rank[a] < rank[b]){
                parent[a] = b;
            }
            else{
                parent[b] = a;
            }
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        parent.resize(n);
        rank.resize(n);

        for(int i = 0; i < n; i++){
            parent[i] = i;
            rank[i] = 1;
        }
//T.C. = O(n^2 * alpha) ~ O(n^2)
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){

                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]){
                    Union(i, j);//O(alpha)
                }

            }
        }

        int groups = 0;
        for(int i = 0; i < n; i++){
            if(parent[i] == i) groups++;
        }
        
        return (n - groups);
    }
};





int main(){
    return 0;
}