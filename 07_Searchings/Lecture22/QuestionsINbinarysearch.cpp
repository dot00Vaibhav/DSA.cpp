// // /*Lower Bound*/
// // //[01] Given a sorted integer array and an integer 'x', find the lower bound of x.
// // //M - 1 : using Liner search
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"n = ";
// //     cin>>n;
// //     int arr[n];
// //     cout<<"Enter the elements of the array :\n";
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     int x;
// //     cout<<"x = ";
// //     cin>>x;
// //     for(int i=0;i<n;i++){
// //         if(arr[i] > x){
// //             cout<<"Lower bound is "<<arr[i-1];
// //             break;
// //         }
// //     }
// //     return 0;
// // }
// //M - 2 : Using Binary search
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array :\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"x = ";
//     cin>>x;
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while (lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] == x){
//             flag = true;
//             cout<<"Lower bound is "<<arr[mid-1];
//             break;
//         }else if(arr[mid] < x) lo = mid+1;
//         else hi = mid - 1;
//     }
//     if(flag == false) cout<<"Lower bound is "<<arr[hi];
//     return 0;
// }

/*Upper bound*/
//[02] Given a sorted integer array and an integer 'x', find the Upper bound of x.
// //M - 1 : using Liner search
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array :\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"x = ";
//     cin>>x;
//     for(int i=0;i<n;i++){
//         if(arr[i] > x){
//             cout<<"Lower bound is "<<arr[i];
//             break;
//         }
//     }
//     return 0;
// }
// //M - 2 : Using Binary search
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array :\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"x = ";
//     cin>>x;
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while (lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] == x){
//             flag = true;
//             cout<<"Lower bound is "<<arr[mid+1];
//             break;
//         }else if(arr[mid] < x) lo = mid+1;
//         else hi = mid - 1;
//     }
//     if(flag == false) cout<<"Lower bound is "<<arr[lo];
//     return 0;
// }

// /*[03] Given a sorted array of n elements and a target 'x'.Find the first occurrence 
// of 'x' in the array. If 'x' does not exist return -1.*// there is last occ. quest leetcode - 34
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the sorted array :\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"x = ";
//     cin>>x;
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while (lo<=hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid]==x){
//             if(arr[mid-1] != x){
//                 flag = true;
//                 cout<<"First occurence of the "<<x<<" is at index "<<mid<<".";
//                 break;
//             }
//             else{//arr[mid-1] == x
//                  hi = mid - 1;
//             }
//         }else if(arr[mid]>x) hi = mid - 1;
//         else lo = mid + 1;
//     }
//     if(flag==false) cout<<"Element not found";
//     return 0;
// }

// //[04] Given a sorted array of non negative distinct integer , find the smallest missing non (-)ve element in it.
// //M-1 : O(n)-approach
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the distinct sorted array : \n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(i != arr[i]) {
//             cout<<"Smallest missing non negative element will be "<<i<<".";
//             break;
//         }
//     }
//     return 0;
// }
//M-2 : O(logn)-approach
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the distinct sorted array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo = 0;
    int hi = n-1;
    int ans;
    while(lo<=hi){
        int mid = lo+(hi-lo);
        if(arr[mid]==mid) lo = mid + 1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }
    cout<<"Smallest missing element will be "<<ans<<".";
    return 0;
}