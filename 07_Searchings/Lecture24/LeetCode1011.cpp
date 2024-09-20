//[01] Capacity to ship packages within D days.     [LeetCode-1011]
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
bool check(int mid, vector<int>& weights, int days){
    int n = weights.size();
    int m = mid;
    int count = 1;
    for(int i=0;i<n;i++){
        if(m>=weights[i]){
            m -= weights[i];
        }else{
            count++;
            m = mid;
            m -= weights[i];
        }
    }
    if(count>days) return false;
    else return true;
}
int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int max = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(weights[i]>max) max = weights[i];
        sum += weights[i];
    }
    int lo = max;
    int hi = sum;
    int mincapacity = sum;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(check(mid,weights,days)){
            mincapacity = mid;
            hi = mid - 1;
        }else lo = mid + 1;
    }
    return mincapacity;
}
int main(){
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    vector<int> weights(size);
    int n = weights.size();
    cout<<"Enter the elements of the vector : \n";
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    int days;
    cout<<"Enter the Available days : ";
    cin>>days;
    int minCapacity = shipWithinDays(weights,days);
    cout<<"Minimum capacity of ship used will be "<<minCapacity<<"kg.";
    return 0;
}