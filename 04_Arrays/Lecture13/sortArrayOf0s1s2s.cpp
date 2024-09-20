// // [01] SORT THE ARRAYS OF 0's , 1's and 2's
// //M - 1 : TWO PASS METHOD.
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int>&v){
//     int n = v.size();
//     int no0 = 0;
//     int no1 = 0;
//     int no2 = 0;
//     for(int i = 0;i < n;i++){
//         if(v[i] == 0) no0++;
//         if(v[i] == 1) no1++;
//         if(v[i] == 2) no2++;
//     }
//     //now let no0=3 , no1=2 , no2=4
//     for(int i = 0;i < n;i++){
//         if(i<no0) v[i] = 0;
//         else if(i<(no0+no1)) v[i] = 1;
//         else v[i] = 2;
//     }
//     return;
// }
// int main(){
//     vector<int>a;
//     int n;
//     cout<<"ENTER THE VECTOR SIZE : ";
//     cin>>n;
//     cout<<"Enter the Elements of Vector : \n";
//     for(int i = 0;i < n;i++){
//         int p;
//         cin>>p;
//         a.push_back(p);
//     }
//     sort01(a);    
//     cout<<"VECTOR AFTER SORTING : ";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

//M - 2 : DUTCH FLAG ALGO. or Three Pointers Algorithm
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    int n;
    cout<<"ENTER THE VECTOR SIZE : ";
    cin>>n;
    cout<<"Enter the elements of Vector : \n";
    for(int i = 0;i < n;i++){
        int p;
        cin>>p;
        a.push_back(p);
    }
    int lo = 0;
    int mid = 0;
    int hi = n-1;//a.size-1
    while(mid <= hi){
        if(a[mid] == 2){
            a[mid] = a[hi];
            a[hi] = 2;
            hi--;
        }else if(a[mid] == 0){
            a[mid] = a[lo];
            a[lo] = 0;
            lo++;
            mid++;
        }else mid++;
    }
    cout<<"VECTOR AFTER SORTING : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}