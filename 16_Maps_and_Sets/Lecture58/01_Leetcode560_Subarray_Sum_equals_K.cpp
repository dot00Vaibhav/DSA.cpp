// 560. Subarray Sum Equals K
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n  = arr.size();
        vector<int> pre(n,0);
        pre[0] = arr[0];
        for(int i=1;i<n;i++){
            pre[i] = arr[i]+pre[i-1];
        }
        unordered_map<int,int> map;
        int count = 0;
        for(int i=0;i<n;i++){
            if(pre[i]==k) count++;
            int rem = pre[i]-k;
            if(map.find(rem)!=map.end()) count += map[rem];
            map[pre[i]]++;
        }
        return count;
    }
};
int main(){
    return 0;
}