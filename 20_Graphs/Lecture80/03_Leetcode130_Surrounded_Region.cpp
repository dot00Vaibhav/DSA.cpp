#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//My solution
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>> q;
        int n = board.size();
        int m = board[0].size();
        if (n == 1 && m == 1) return;
//marking cell of board as '1' if the cell is with border cell [which equals to '0' ]
        for(int i=0;i<n;i++){
            if(board[i][0] == 'O') {
                q.push({i,0});
                board[i][0] = '1';
            }
            if(board[i][m-1] == 'O') {
                q.push({i,m-1}); 
                board[i][m-1] = '1';
            }
        }
        for(int j=1;j<m-1;j++){
            if(board[0][j] == 'O') {
                q.push({0,j});
                board[0][j] = '1';
            }
            if(board[n-1][j] == 'O') {
                q.push({n-1,j});
                board[n-1][j] = '1'; 
            }
        }
        vector<vector<int> > dir = {{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            int i = curr.first;
            int j = curr.second;
            for(int d=0;d<4;d++){
                int nr = i + dir[d][0];
                int nc = j + dir[d][1];
                // if(nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
                // if(board[nr][nc] == 'O'){
                //     visited[nr][nc] = 1;
                //     q.push({nr,nc});
                // }
                if(nr >= 0 && nc >= 0 && nr < n && nc < m && board[nr][nc] == 'O'){
                    board[nr][nc] = '1';
                    q.push({nr,nc});
                }
            }
        }

        //flip to 'O' is mareked '1'
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == '1'){
                    board[i][j] = 'O';
                }
                else if(board[i][j] == 'O') board[i][j] = 'X';
            }
        }
    }
};
        
        
//Deepseek solution
// class Solution {
// public:
//     void solve(vector<vector<char>>& board) {
//         if (board.empty()) return;
//         int n = board.size();
//         int m = board[0].size();
//         if (n == 1 && m == 1) return;

//         queue<pair<int, int>> q;

//         // Step 1: Add all boundary 'O's to the queue
//         for (int i = 0; i < n; i++) {
//             if (board[i][0] == 'O') {
//                 q.push({i, 0});
//                 board[i][0] = 'T'; // Mark as visited
//             }
//             if (board[i][m - 1] == 'O') {
//                 q.push({i, m - 1});
//                 board[i][m - 1] = 'T'; // Mark as visited
//             }
//         }
//         for (int j = 1; j < m - 1; j++) {
//             if (board[0][j] == 'O') {
//                 q.push({0, j});
//                 board[0][j] = 'T'; // Mark as visited
//             }
//             if (board[n - 1][j] == 'O') {
//                 q.push({n - 1, j});
//                 board[n - 1][j] = 'T'; // Mark as visited
//             }
//         }

//         // Step 2: Perform BFS to mark all 'O's connected to the boundary
//         vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
//         while (!q.empty()) {
//             auto curr = q.front();
//             q.pop();
//             int i = curr.first;
//             int j = curr.second;

//             // Explore all 4 directions
//             for (int d = 0; d < 4; d++) {
//                 int nr = i + dir[d][0];
//                 int nc = j + dir[d][1];

//                 // Check if the new cell is within bounds and is 'O'
//                 if (nr >= 0 && nc >= 0 && nr < n && nc < m && board[nr][nc] == 'O') {
//                     q.push({nr, nc});
//                     board[nr][nc] = 'T'; // Mark as visited
//                 }
//             }
//         }

//         // Step 3: Flip all remaining 'O's to 'X' and restore 'T's to 'O'
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (board[i][j] == 'O') {
//                     board[i][j] = 'X';
//                 } else if (board[i][j] == 'T') {
//                     board[i][j] = 'O';
//                 }
//             }
//         }
//     }
// };



int main(){
    return 0;
}