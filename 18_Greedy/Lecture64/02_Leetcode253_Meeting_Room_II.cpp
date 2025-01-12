//253. Meeting Rooms II :: use lintcode 919. Meeting Rooms II
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Solution{
public:
    int minMeetingRooms(vector<vector<int>>& intervals){
        vector<int> start, ending;
        for(auto ele : intervals){
            start.push_back(ele[0]);
            ending.push_back(ele[1]);
        }
        sort(start.begin(), start.end());
        sort(ending.begin(), ending.end());
        int ans = 0;
        int rooms = 0;
        int i = 0, j = 0;
        while(i < start.size() && j < ending.size()){
            if(start[i] < ending[j]){
                // a meeting is started
                rooms++;
                ans = max(ans, rooms);
                i++;
            }
            else if(start[i] > ending[j]){
                // a meeting is ended
                rooms--;
                j++;
            }
            else{// if(start[i] == ending[j]){
                i++;
                j++;
            }
        }
        return ans;
    }
};

int main(){
    return 0;
}
//smilar to 253. Meeting Rooms 