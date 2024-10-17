#include<iostream>
#include<deque>
#include<vector>
using namespace std;
// using dequeue
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        if(k==1) return arr;
        deque<int> dq;  // should be in decreasing order always
        vector<int> ans;  // min value of 'i' should be k-1
        for(int i=0;i<n;i++){
            while(dq.size()>0 && arr[i]>arr[dq.back()]) dq.pop_back();
            dq.push_back(i);
            int j = i-k+1;  // start of the current window
            while(dq.front()<j) dq.pop_front();
            if(i>=k-1) ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};
int main(){
    
}