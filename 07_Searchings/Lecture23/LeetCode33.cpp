//[01] Search in rotated sorted array.         [LeetCode-33]
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"target = ";
    cin>>target;
    int hi = n-1;
    int lo = 0;
    if(n==2){
        if(target==arr[0]){
            cout<<"Index of the target is "<<0;
            return 1;
        }else if(target==arr[1]){
            cout<<"Index of the target is "<<1;
            return 1;
        }else{
            cout<<"Target NOT found!!!";
            return -1;
        }
    }
    int pivotidx = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid==0) lo = mid + 1;
        else if(mid==n-1) hi = mid - 1;
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            pivotidx = mid;
            break;
        }else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
            pivotidx = mid+1;
            break;
        }else if(arr[mid]>arr[hi]) lo = mid+1;
        else hi = mid - 1;
    }
    if(pivotidx==-1){
        lo = 0;
        hi = n-1;
        while (lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==target){
                cout<<"Index of the target is "<<mid;
                return 1;
            }else if(arr[mid]>target) hi = mid - 1;
            else lo = mid + 1;
        }
        cout<<"Element NOT found!!!";
        return -1;
    }
    if(target>=arr[0] && target<=arr[pivotidx-1]){
        lo = 0;
        hi = pivotidx;
        while (lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==target){
                cout<<"Index of the target is "<<mid;
                return 1;
            }else if(arr[mid]>target) hi = mid - 1;
            else lo = mid + 1;
        }
    }else{
        lo = pivotidx+1;
        hi = n-1;
        while (lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==target){
                cout<<"Index of the target is "<<mid;
                return 1;
            }else if(arr[mid]>target) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    cout<<"Element NOT found!!!";
    return 0;
}