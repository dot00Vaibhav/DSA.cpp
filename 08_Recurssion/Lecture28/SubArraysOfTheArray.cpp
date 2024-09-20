//Find out all the subarrays of the array.
// //Method 1 : using Iterative method 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){//start of the SubArray
//         for(int j=i;j<n;j++){// k only denotes the no. of rounds in loop
//             for (int k=i;k<=j;k++){
//                 cout<<arr[k];
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

//Method 2 : using Recursive method
#include<iostream>
#include<vector>
using namespace std;
void SubArray(vector<int> v,int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++) cout<<v[i];
        cout<<endl;
        return;
    }
    SubArray(v,arr,n,idx+1);
    if(v.size()==0 || v[v.size()-1] == arr[idx-1]){
        v.push_back(arr[idx]);
        SubArray(v,arr,n,idx+1);
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    SubArray(v,arr,n,0);
    return 0;
}