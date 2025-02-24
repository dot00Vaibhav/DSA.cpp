#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};//i,j->i+1,j -> i-1,j -> i,j+1 -> i,j-1
    int rows;
    int cols;
    vector<vector<int>> h;

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        rows = heights.size();
        cols = heights[0].size();
        h = heights;
        queue<pair<int,int> > pacificBfs;
        queue<pair<int,int> > atlanticBfs;

        //step of multi source BFS
        for(int i = 0;i < rows; i++){
            pacificBfs.push({i,0});
            atlanticBfs.push({i,cols-1});
        }
        for(int j = 1;j < cols; j++){
            pacificBfs.push({0,j});
        }
        for(int j = 0;j < cols-1; j++){
            atlanticBfs.push({rows-1,j});
        }

        vector<vector<bool>> pacific = bfs(pacificBfs);
        vector<vector<bool>> atlantic = bfs(atlanticBfs);

        vector<vector<int>> result;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(pacific[i][j] && atlantic[i][j]) result.push_back({i,j});
            }
        }
        return result;
    }
    vector<vector<bool>> bfs(queue<pair<int,int>>& q){
        vector<vector<bool> > visited(rows,vector<bool> (cols,false));
        while(!q.empty()){
            auto cell = q.front();
            q.pop();
            int i = cell.first;
            int j = cell.second;
            visited[i][j] = true;
            for(int d = 0;d < 4;d++){
                int newRow = i+dir[d][0];
                int newCol = j+dir[d][1];
                if(newRow < 0 || newCol < 0 || newRow >= rows || newCol >= cols) continue;//you exited the grid
                if(visited[newRow][newCol]) continue;
                if(h[newRow][newCol] < h[i][j]) continue;//h[newRow][newCol] -> neighbours height , h[i][j] -> curr cell's height
                q.push({newRow,newCol});

            }
        }
        return visited;
    }
};

int main(){
    return 0;
}