// //[01] Last occurrence 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,2,3,3,3,4};
//     int n = 7;
//     int x = 3;
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while(lo<=hi){
//         int mid = lo+(hi-lo)/2;
//         if(arr[mid]==x){
//             if(arr[mid+1] != x){
//                 flag = true;
//                 cout<<"Last occurrence of "<<x<<" is "<<mid;
//                 break;
//             }else{//arr[mid+1] == x
//                 lo = mid + 1;
//             }
//         }else if(arr[mid]>x) hi = mid - 1;
//         else lo = mid + 1;
//     }
//     if(flag == false) cout<<-1;
//     return 0;
// }
