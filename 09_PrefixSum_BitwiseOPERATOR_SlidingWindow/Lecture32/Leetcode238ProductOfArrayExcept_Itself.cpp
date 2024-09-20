// 238. Product of Array Except Self
#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    // M-1; 
    //vector<int> pre(n);
    //vector<int> suf(n);
    //vector<int> ans(n);
    ////prefix product array
    //int p = nums[0];
    //pre[0] = 1;
    //for(int i=1;i<n;i++){
    //    pre[i] = p;
    //    p*=nums[i];
    //}
    ////suffix product array
    //p = nums[n-1];
    //suf[n-1] = 1;
    //for(int i=n-2;i>=0;i--){
    //    suf[i]=p;
    //    p=p*nums[i];
    //}
    //// ans array
    //for(int i=0;i<n;i++){
    //    ans[i]=pre[i]*suf[i];
    //}
    //return ans;
    // }

    // //M-2:
    //vector<int> pre(n);
    //vector<int> suf(n);
    ////prefix product array
    //int p = nums[0];
    //pre[0] = 1;
    //for(int i=1;i<n;i++){
    //    pre[i] = p;
    //    p*=nums[i];
    //}
    ////suffix product array
    //p = nums[n-1];
    //suf[n-1] = 1;
    //for(int i=n-2;i>=0;i--){
    //    suf[i]=p;
    //    p=p*nums[i];
    //}
    //// pre[i]=pre[i]*suf[i]
    //for(int i=0;i<n;i++){
    //    pre[i]=pre[i]*suf[i];
    //}
    //return pre;

    //M-2:
    vector<int> pre(n);
    //prefix product array
    int p = nums[0];
    pre[0] = 1;
    for(int i=1;i<n;i++){
        pre[i] = p;
        p*=nums[i];
    }
    //suffix product array(int prefix only)
    p = nums[n-1];
    for(int i=n-2;i>=0;i--){
        pre[i]=pre[i]*p;
        p=p*nums[i];
    }
    return pre;
}
int main(){
    return 0;
}