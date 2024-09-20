// 1480. Running Sum of 1d Array
#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int n=nums.size();
    // vector<int> run(n);
    // run[0]=nums[0];
    // for(int i=1;i<n;i++){
    //     run[i]=nums[i]+run[i-1];
    // }
    // return run;
    for(int i=1;i<n;i++){
        nums[i]=nums[i]+nums[i-1];
    }
    return nums;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> nums(arr,arr+n);
    vector<int> run = runningSum(nums);
    cout<<"Prefix Sum Array : ";
    for(int i=0;i<n;i++){
        cout<<run[i]<<" ";
    }
    return 0;
}//11:40