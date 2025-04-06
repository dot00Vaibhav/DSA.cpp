#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;
bool CanPlaceQueen(int row, int col, int n){
    //column check
    for(int i = row-1; i >= 0; i--){
        if(grid[i][col] == 'Q') return false;//we are attacked
    }
    //left diagnal check
    for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
        if(grid[i][j] == 'Q') return false;
    }
    //right diagnal check
    for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++){
        if(grid[i][j] == 'Q') return false;
    }

    return true;// means no attack found
}

void f(int row, int n){
    if(row == n){
        // we got one successful answer
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<grid[i][j]<<"   ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    for(int col = 0; col < n; col++){
        if(CanPlaceQueen(row, col, n)){
            grid[row][col] = 'Q';
            f(row+1, n);
            //backtracking step
            grid[row][col] = '.';
        }
    }
}

void nqueen(int n) {
    grid.resize(n, vector<char> (n, '.'));
    f(0, n);
}

int main(){
    nqueen(4);
    return 0;
}