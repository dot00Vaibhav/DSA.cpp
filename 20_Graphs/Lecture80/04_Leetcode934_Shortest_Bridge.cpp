#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;



class Solution {
public:

    int m,n;
    vector<vector<int>> directions = {{-1,0},{0,-1},{0,1},{1,0}};

    bool isSafe(int i, int j){
        return i>=0 && i<m && j>=0 && j<n;
    }
    
    void dfs(vector<vector<int>>& grid, int i, int j, set<pair<int,int>>& visitedCell){

        if(!isSafe(i,j) || grid[i][j] == 0 || visitedCell.find({i,j}) != visitedCell.end()){
            return;
        }
        visitedCell.insert({i,j});
        for(auto &dir : directions){
            int i_ = i+dir[0];
            int j_ = j+dir[1];

            dfs(grid,i_,j_,visitedCell);

        }
    }

    int bfs(vector<vector<int>>& grid, set<pair<int,int>>& visitedCell){
        queue<pair<int,int>> q;
        for(auto &it : visitedCell){
            q.push(it);
        }
        int level = 0;
        while(!q.empty()){

            int L = q.size();
            while(L--){
                pair<int,int> p = q.front();
                q.pop();
                int x = p.first;
                int y = p.second;
                for(auto &dir : directions){
                    int x_ = x+dir[0];
                    int y_ = y+dir[1];

                    if(isSafe(x_,y_) && visitedCell.find({x_,y_}) == visitedCell.end()){

                        if(grid[x_][y_] == 1){//we found 2nd island
                            return level;
                        }

                        visitedCell.insert({x_,y_});
                        q.push({x_,y_});

                    }
                }
            }

            level++;
        }
        return level;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        set<pair<int,int>> visitedCell;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(grid[i][j] == 1){//found 1st island
                    dfs(grid, i, j, visitedCell);//mark all 1 cells of 1st island and store them in visitedCell
                    return bfs(grid, visitedCell);
                }

            }
        }
        return -1;
    }
};



int main(){
    return 0;
}