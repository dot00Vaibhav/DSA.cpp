//Leetcode :- 704
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    int lo = 0;
    int hi = n-1;
    int idx = -1;
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == target){
            flag = true;
            cout<<"Target found";
            return 1;
        }
        else if(arr[mid] > target) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == false){
        cout<<"Target NOT found!!";
        return 0;
    }
}