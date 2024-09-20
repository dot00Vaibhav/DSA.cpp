// 287. Find the Duplicate Number
#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {//this method is not correct because in the question it was given that we have to solve the problem without modifying the array.
    int n = nums.size();
    int i=0;
    while(i<n){
        int correctIdx = nums[i];
        if(nums[correctIdx]==nums[i]) return nums[i];//means jo nums[i] hai vo phle se present hai vector mai
        else swap(nums[i],nums[correctIdx]);
    }
    return 10;
}

//best method is by subtracting the sum of the elements of the array to the actualSum(means sum to the highrst number => sum of 'n' numbers) of the array

int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> nums(arr,arr+n);
    cout<<"Duplicate numbers in the Array : "<<findDuplicate(nums);
    return 0;
}
//HOME-Work : find all duplicate numbers