//[01] Peak index in mountain array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,3,2,0};
    int n = 7;
    int idx = -1;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            idx = mid;
            cout<<"Peak Index will be "<<idx;
            return 0;
        }else if(arr[mid] > arr[mid+1]) hi = mid - 1;
        else lo = mid + 1;
    }
    cout<<idx;
    return 0;
}