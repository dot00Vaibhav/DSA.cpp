// 435. Non-overlapping Intervals
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool cmp(vector<int>& a, vector<int>& b){
//     return a[0] < b[0];
// }
// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end(),cmp);//sorted on the basis of start time
//         vector<vector<int>> result;
//         int n = intervals.size();
//         result.push_back(intervals[0]);//we will start from the start
//         for(int i=1;i<n;i++){
//             vector<int> curr = intervals[i];
//             if(curr[0] < result[result.size()-1][1]){
//                 //curr.start < last.end : overlapping -> merge
//                 result[result.size()-1][0] = min(curr[0],result[result.size()-1][0]);//take minimum of start time
//                 result[result.size()-1][1] = min(curr[1],result[result.size()-1][1]);//take maximum of their end time
//             }
//             else{
//                 result.push_back(intervals[i]);
//             }
//         }
//         return n-result.size();
//     }
// };


// //Method 01 : on the basis of start time 
// bool cmp(vector<int>& a, vector<int>& b){
//     return a[0] < b[0];
// }
// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         int ans = 0;
//         sort(intervals.begin(),intervals.end(),cmp);//sorted on the basis of start time
//         int lastEndtime = intervals[0][1];
//         for(int i=1;i<intervals.size();i++){
//             if(intervals[i][0] < lastEndtime){
//                 ans++;
//                 lastEndtime = min(lastEndtime,intervals[i][1]);
//             }
//             else lastEndtime = intervals[i][1];
//         }
//         return ans;
//     }
// };

//Method 02 : on the basis of end time 
bool cmp(vector<int>& a, vector<int>& b){
    return a[1] < b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(),intervals.end(),cmp);//sorted on the basis of end time
        int lastEndtime = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] < lastEndtime){
                ans++;
            }
            else lastEndtime = intervals[i][1];
        }
        return ans;
    }
};

int main(){
    return 0;
}