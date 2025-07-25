//209. Minimum size subarray sum.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int j = 0;
    int minLen = INT_MAX;
    int len;
    int sum = 0;
    while(j<n){
        sum += nums[j];
        while(sum>=target){
            len = j-i+1;
            minLen = min(minLen,len);
            sum -= nums[i];
            i++;
        }
        j++;
    }
    if(minLen == INT_MAX) return 0;
    return minLen;
}
int main(){
    return 0;
}