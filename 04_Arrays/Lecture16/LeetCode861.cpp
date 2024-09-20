//[01] Score after flipping the matrices.
//Leetcode : 861
#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    //making the first column all one
    for(int i=0;i<rows;i++){
        if(grid[i][0] == 0){//flip
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    //flip the columns where the number of 0 > number of 1
    for(int j=0;j<cols;j++){
        int no0 = 0;
        int no1 = 0;
        for(int i=0;i<rows;i++){
            if(grid[i][j] == 0) no0++;
            else no1++;
        }
        if(no0 > no1){
            for(int i=0;i<rows;i++){
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for(int i=0;i<rows;i++){
        int x=1;
        for(int j=cols-1;j>=0;j--){
            sum += grid[i][j]*x;
            x *= 2;
        }
    }
    return sum;
}
int main(){
    vector< vector<int> >v;
    for(int i=0;i<3;i++){
        vector<int>a;
        for(int j=0;j<4;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    int maximum = matrixScore(v);
    cout<<"maximum after flipping the matrix : ";
    cout<<maximum;
    return 0;
}