// 373. Find K Pairs with Smallest Sums
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define pp pair<int, pair<int, int>>
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pp, vector<pp>, greater<pp> > pq;
        for(int i=0;i<nums1.size();i++){
            pq.push({nums1[i]+nums2[0], {i,0}});//stores the first pair
        }
        vector<vector<int>> result;
        pp ans;
        while(k-- && !pq.empty()){
            ans = pq.top();//jonsa element nikla hai
            pq.pop();
            int sum = ans.first;//usi ka sum
            int nums1Idx = ans.second.first;//usi ka first index
            int nums2Idx = ans.second.second;//usi ka second
            result.push_back({nums1[nums1Idx],nums2[nums2Idx]});
            //after that jo element nikla tha uska next in row will be pushed into queue
            if(nums2Idx+1 < nums2.size()){
                pq.push({nums1[nums1Idx]+nums2[nums2Idx+1], {nums1Idx,nums2Idx+1}});
            }
        }
        return result;
    }
};
int main(){
    return 0;
}