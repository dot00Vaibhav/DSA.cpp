// 56. Merge Intervals
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(vector<int>& a, vector<int>& b){
    return a[1] < b[1];
}
class Solution {//vriaton one of the merge interval
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);//sorted on the basis of end time
        vector<vector<int>> result;
        int n = intervals.size();
        result.push_back(intervals[n-1]);//we will start from the back
        for(int i=n-2;i>=0;i--){
            vector<int> curr = intervals[i];
            if(curr[1] >= result[result.size()-1][0]){
                //curr.end >= last.start : overlapping -> merge
                result[result.size()-1][0] = min(curr[0],result[result.size()-1][0]);//take minimum of start time
                result[result.size()-1][1] = max(curr[1],result[result.size()-1][1]);//take maximum of their end time
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        // reverse(result.begin(),result.end());//when sorted by end time start doing work from last and if sorted by start time the do the work from the begining
        return result;
    }
};

int main(){
    return 0;
}