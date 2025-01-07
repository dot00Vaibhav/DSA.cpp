// 1642. Furthest Building You Can Reach
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// class Solution {
// public:
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
//         priority_queue<int> pq;
//         int i = 0;
//         int brickused = 0;
//         for(;i<heights.size()-1;i++){
//             if(heights[i] >= heights[i+1]){
//                 continue;
//             }
//             int heightDiff = heights[i+1]-heights[i];
//             if(heightDiff + brickused <= bricks){
//                 // do we have enough bricks
//                 brickused += heightDiff;
//                 pq.push(heightDiff);
//             }else if(ladders > 0){
//                 if(!pq.empty() && pq.top() > heightDiff){
//                     brickused = brickused - pq.top() + heightDiff;
//                     pq.pop();
//                     pq.push(heightDiff);
//                 }
//                 ladders--;
//             }else{
//                 break;
//             }
//         }
//         return i;
//     }
// };


class Solution {
public:
    int furthestBuilding(vector<int>& v, int b, int l) {
        priority_queue<int> pq;//max heap provide the maximum number of bricks usedin past.
        int i = 0;
        for(i;i<v.size()-1;i++){
            if(v[i+1] <= v[i]) continue;
            int d = v[i+1] - v[i];
            if(d<=b){
                b -= d;
                pq.push(d);
            }else if (l>0){
                if(!pq.empty()){
                    int x = pq.top();//bricks used somewhere in past
                    if(d<x){//todays difference is less then pasts brick used then
                        b += x;//retains the bricks used in past
                        pq.pop();//delete that bricks in queue
                        b -= d;//use bricks in present
                        pq.push(d);//push the difference brick which is used now.
                    }
                }
                l--;//ladders will always be used : if used in present or passes(when the large amount of bricks are used)
            }
            else break;
        }
        return i;
    }
};
int main(){
    return 0;
}