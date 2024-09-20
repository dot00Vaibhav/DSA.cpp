// //[01] bubble sort algo without any optimisation
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[6] = {5,4,6,3,2,1};
//     int n = 6;
//     //bubble sort
//     for(int i=0;i<n-1;i++){//n-1 passes ; where n is the size of the array.
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//[02] bubble sort : with optimisation
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //bubble sort
    for(int i=0;i<n-1;i++){//n-1 passes ; where n is the size of the array.
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);//swap
                flag = false;
            }
        }
        if(flag == true) break;//swap didn't happen
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
