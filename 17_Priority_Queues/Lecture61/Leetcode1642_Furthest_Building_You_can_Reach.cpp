// 1642. Furthest Building You Can Reach
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int i = 0;
        int brickused = 0;
        for(;i<heights.size()-1;i++){
            if(heights[i] >= heights[i+1]){
                continue;
            }
            int heightDiff = heights[i+1]-heights[i];
            if(heightDiff + brickused <= bricks){
                // do we have enough bricks
                brickused += heightDiff;
                pq.push(heightDiff);
            }else if(ladders > 0){
                if(!pq.empty() && pq.top() > heightDiff){
                    brickused = brickused - pq.top() + heightDiff;
                    pq.pop();
                    pq.push(heightDiff);
                }
                ladders--;
            }else{
                break;
            }
        }
        return i;
    }
};
int main(){
    return 0;
}