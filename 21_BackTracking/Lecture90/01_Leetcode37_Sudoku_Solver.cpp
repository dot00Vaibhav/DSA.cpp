#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int r, int c, int num){
        //row check
        for(int i = 0; i < 9; i++){
            if(board[r][i] - '0' == num) return false;
        }
        //col check
        for(int i = 0; i < 9; i++){
            if(board[i][c] - '0' == num) return false;
        }
        //In the big cell
        int x = (r/3)*3;
        int y = (c/3)*3;

        for(int m = x; m < x+3; m++){
            for(int n = y; n < y+3; n++){
                if(board[m][n] - '0' == num) return false;
            }
        }
        return true;
    }

    bool f(vector<vector<char>>& board, int r, int c){
        if(r == 9) return true;
        if(c == 9) return f(board, r+1, 0);
        if(board[r][c] != '.') return f(board, r, c+1);
        for(int j = 1; j <= 9; j++){
            if(isSafe(board, r, c, j)){
                board[r][c] = '0'+j;
                bool ret = f(board, r, c+1);
                if(ret == true) return true;
                board[r][c] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        f(board, 0, 0);
    }
};


int main(){
    return 0;
}