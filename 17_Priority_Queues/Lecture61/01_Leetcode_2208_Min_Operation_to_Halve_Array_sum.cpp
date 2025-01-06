#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        double ts = 0.0;//total sum
        for(int i=0;i<nums.size();i++){
            ts += nums[i];
            pq.push(nums[i]*1.0);
        }
        double rs = ts/2.0;//remaining sum
        int ans = 0;
        while(ts > rs){
            double ele = pq.top();
            pq.pop();
            ts -= (ele)/2.0;
            pq.push((ele/2.0));
            ans++;
        }
        return ans;
    }
};
int main(){
    return 0;
}