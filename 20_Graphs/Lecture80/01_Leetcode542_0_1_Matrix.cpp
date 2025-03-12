#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int> > q;
        int n = mat.size();
        if(n==0) return mat;
        int m = mat[0].size();
        vector<vector<int>> result(n,vector<int> (m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                    result[i][j] = 0;
                }
            }
        }
        vector<vector<int> > dir = {{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            auto cell = q.front();
            q.pop();
            int i = cell.first;
            int j = cell.second;
            for(int d=0;d<4;d++){
                int nr = i+dir[d][0];
                int nc = j+dir[d][1];
                if(nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
                if(result[nr][nc] == -1){
                    result[nr][nc] = result[i][j] + 1;
                    q.push({nr, nc});
                }
            }
        }
        return result;
    }
};

int main(){
    return 0;
}