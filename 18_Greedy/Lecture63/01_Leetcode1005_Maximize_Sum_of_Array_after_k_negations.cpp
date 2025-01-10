// 1005. Maximize Sum Of Array After K Negations
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {//klogn + n
        priority_queue<int ,vector<int> ,greater<int> > pq(nums.begin(),nums.end());//O(n)
        int sum = 0;
        for(int i=0;i<nums.size();i++) sum += nums[i];//O(n)
        while(k--){//O(klogn)
            int el = pq.top();//min element
            if(el == 0) break;
            pq.pop();//remove the smallest
            sum -= el;
            pq.push(-1*el);//add the negated element
            sum += (-el);
        }
        return sum;
    }
};
int main(){
    return 0;
}