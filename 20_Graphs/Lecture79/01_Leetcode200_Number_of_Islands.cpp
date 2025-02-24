#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//we have used BFS this time to find the connected components
class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        int cc = 0;//stores te number of connected components
        for(int r = 0;r < row; r++){
            for(int c = 0;c < col; c++){
                if(grid[r][c] == '0'){
                    //it is a water body
                    continue;
                }
                //new unvisited land piece found , i.e. new connected component
                cc++;
                grid[r][c] = '0';//mark it visited

                queue<pair<int,int>> q;
                q.push({r,c});//store the src node
                while(!q.empty()){
                    auto curr = q.front();//get one node from queue
                    q.pop();
                    //go to all unvisited neighbours of the curr node
                    int currRow = curr.first;
                    int currCol = curr.second;

                    //check up
                    if(currRow - 1 >= 0 && grid[currRow - 1][currCol] == '1'){
                        q.push({currRow - 1,currCol});
                        grid[currRow - 1][currCol] = '0';
                    }
                    //check down
                    if(currRow + 1 < row && grid[currRow + 1][currCol] == '1'){
                        q.push({currRow + 1,currCol});
                        grid[currRow + 1][currCol] = '0';
                    }
                    //check left
                    if(currCol - 1 >= 0 && grid[currRow][currCol - 1] == '1'){
                        q.push({currRow,currCol - 1});
                        grid[currRow][currCol - 1] = '0';
                    }
                    //check right
                    if(currCol + 1 < col && grid[currRow][currCol + 1] == '1'){
                        q.push({currRow,currCol + 1});
                        grid[currRow][currCol + 1] = '0';
                    }
                }
            }
        }
        return cc;
    }
};



int main(){
    return 0;
}