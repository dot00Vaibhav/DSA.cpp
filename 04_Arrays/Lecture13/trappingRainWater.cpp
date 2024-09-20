//[01]TRAPPING RAIN WATER -> Leetcode : 42
#include<iostream>
#include<vector>
using namespace std;
int trap02(vector<int>& height) {
    int n = height.size();
    //previous greatest element
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1;i<n;i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    //next greatest element array
    int next[n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(max<height[i]) max = height[i];
    }
    // minimum array -> prev as minimum
    for(int i=0;i<n;i++){
        prev[i] = min(prev[i],next[i]);
    }
    //calculating water
    int water = 0;
    for(int i=1;i<n-1;i++){
        if(prev[i]>height[i]){
            water += (prev[i] - height[i]);
        }
    }
    return water;
}
int trap02(vector<int>& height) {
    int n = height.size();
    //previous greatest eleement
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1;i<n;i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    //next greatest element array -> prev as next
    prev[n-1] = -1;
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
        if(max<prev[i]) prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    //calculating water
    int water = 0;
    for(int i=1;i<n-1;i++){
        if(prev[i]>height[i]){
            water += (prev[i] - height[i]);
        }
    }
    return water;
}
int main(){

    return 0;
}