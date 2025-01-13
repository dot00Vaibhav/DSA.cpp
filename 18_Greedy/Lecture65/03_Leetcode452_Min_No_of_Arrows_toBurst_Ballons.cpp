#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Method 01 : sort using end time
// bool cmp(vector<int>& a, vector<int>& b){
//     return a[1] < b[1];
// }
// class Solution {
// public:
//     int findMinArrowShots(vector<vector<int>>& points) {
//         int arrows = 0;
//         sort(points.begin(),points.end(),cmp);
//         int lastXend = points[0][1];
//         for(int i=1;i<points.size();i++){
//             if(lastXend >= points[i][0]){
//                 arrows++;
//             }
//             else {
//                 lastXend = points[i][1];
//             }
//         }
//         return points.size() - arrows;
//     }
// };

//Method 02 : sort using start time
bool cmp(vector<int>& a, vector<int>& b){
    return a[0] < b[0];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int arrows = 0;
        sort(points.begin(),points.end(),cmp);
        int lastXend = points[0][1];
        for(int i=1;i<points.size();i++){
            if(lastXend >= points[i][0]){
                arrows++;//if overlap then increase arrows
                lastXend = min(lastXend,points[i][1]);
            }
            else {
                lastXend = points[i][1];
            }
        }
        return points.size() - arrows;
    }
};
int main(){
    return 0;
}