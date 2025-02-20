#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    // The below function will do dfs from currRow, currCol to it's neighbours containing initialColor
        void dfs(vector<vector<int>> &image,int currRow,int currCol,int initialColor,int newColor){
            int n = image.size();//total rows
            int m = image[0].size();//total column
    
            if(currRow < 0 || currCol < 0 || currRow >= n || currCol >= m){
                return;// you are outsize the grid
            }
            //if the cell you landed is not of initial color
            if(image[currRow][currCol] != initialColor) return;
    
            image[currRow][currCol] = newColor;//color it with newColor if the box is with initialColor
    
            dfs(image,currRow+1,currCol,initialColor,newColor);//down
            dfs(image,currRow,currCol-1,initialColor,newColor);//left
            dfs(image,currRow-1,currCol,initialColor,newColor);//up
            dfs(image,currRow,currCol+1,initialColor,newColor);//right
        }
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            if(color == image[sr][sc]) return image;//yhis means if the initialColor is same as the finalColor then every other box will also have the same color
            dfs(image,sr,sc,image[sr][sc],color);
            return image;
        }
    };

int main(){
    return 0;
}