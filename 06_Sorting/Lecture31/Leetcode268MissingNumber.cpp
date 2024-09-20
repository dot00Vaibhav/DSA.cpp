// 268. Missing Number
#include<iostream>
#include<vector>
using namespace std;
int missingNumber01(vector<int>& nums) {
    //M-1: Using Extra space
    int n=nums.size();
    vector<bool> checks(n+1,false);
    for(int i=0;i<n;i++){
        int ele = nums[i];
        checks[ele] = true;//checks have length one greater then nums. so it can change the value of 10th index
    }
    for(int i=0;i<=n;i++){
        if(checks[i]==false) return i;
    }
    return 100;
}
int missingNumber02(vector<int>& nums) {
    //M-2: using Cyclic Sort
     int n = nums.size();
     int i=0;
     while(i<n){
         int correctIdx = nums[i];
         if(correctIdx==i || nums[i]==n) i++;
         else swap(nums[i],nums[correctIdx]);
     }
     for(int i=0;i<n;i++){
         if(nums[i]!=i) return i;
     }
     return n;
}
int missingNumber03(vector<int>& nums) {
    //M-3: using numarical method
    int n=nums.size();
    int actualSum=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    return actualSum-sum;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums(arr,arr+n);
    cout<<"Missing Element = "<<missingNumber01(nums);
    cout<<endl<<"Missing Element = "<<missingNumber02(nums);
    cout<<endl<<"Missing Element = "<<missingNumber03(nums);
    return 0;
}