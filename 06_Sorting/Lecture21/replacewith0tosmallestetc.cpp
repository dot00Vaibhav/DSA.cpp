// //[01]Replace with 0 to n-1.
// //M - 1 :
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements : \n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x = 0;
//     vector<int> v(5,0);//0 means not visited
//     for(int i=0;i<n;i++){
//         int min = INT_MAX;
//         int mindx = -1;
//         for(int j=0;j<n;j++){
//             if(v[j] == 1) continue;
//             else if(min>arr[j]){
//                 min = arr[j];
//                 mindx = j;
//             }
//         }
//         arr[mindx] = x;
//         v[mindx] = 1;
//         x++;
//     }
//     cout<<"Replaced elements are :\n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//M - 2 : Negative marking method : only for positive or negative and for some range
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x = 0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(arr[j]<=0) continue;
            else if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        arr[mindx] = -x;
        x++;
    }
    cout<<"Replaced elements are :\n";
    for(int i=0;i<n;i++){
        arr[i] = -arr[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}