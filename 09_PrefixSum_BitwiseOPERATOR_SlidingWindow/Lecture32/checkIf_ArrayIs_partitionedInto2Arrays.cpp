//Check if array is partitioned into 2 continous arrays of equal sum.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    //check if any x exist
    int idx = -1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout<<"Can be partitioned at "<<idx<<"th index.";
    else cout<<"Can Not partitioned !!";
    return 0;
}