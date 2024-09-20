//[01] Two elements of an array a,a[i] and a[j] form an inversions if 
//a[i]>a[j] and i<j.Given an array of integers.
//Find the inversion count in the array.
// #include<iostream>
// #include<vector>
// using namespace std;
// int count = 0;
// int Inversions(vector<int> a,vector<int> b){
//     int c = 0;
//     int i=0 , j=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]>b[j]){
//             c += (a.size()-i);
//             j++;
//         }else i++;
//     }
//     return c;
// }
// void merge(vector<int> &a,vector<int> &b,vector<int> &res){
//     int i=0,j=0,k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<=b[j])   res[k++]=a[i++];
//         else    res[k++]=b[j++];
//     }
//     if(i==a.size()) while(j<b.size()) res[k++]=b[j++];
//     if(j==b.size()) while(i<a.size()) res[k++]=a[i++];
// }
// void mergesort(vector<int> &v){
//     int n=v.size();
//     if(n==1) return;
//     int n1=n/2 , n2=n-n/2;
//     vector<int> a(n1) , b(n2);
//     //copy pasting
//     for(int i=0;i<n1;i++)
//         a[i] = v[i];
//     for(int i=0;i<n2;i++)
//         b[i] = v[i+n1];
//     //magic aka recursion
//     mergesort(a);
//     mergesort(b);
//     //count the inversion
//     count += Inversions(a,b);
//     //merge
//     merge(a,b,v);
//     a.clear();
//     b.clear();
// }
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of Array : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> v(arr,arr+n);//same as arr,copy
//     // int count = 0;
//     // for(int i=0;i<n-1;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(arr[i]>arr[j]) count++;
//     //     }
//     // }
//     // cout<<count;
//     mergesort(v);
//     cout<<"Inversions count : "<<count;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int Inversions(vector<int> a,vector<int> b){
    int c = 0;
    int i=0 , j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c += (a.size()-i);
            j++;
        }else i++;
    }
    return c;
}
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j])   res[k++]=a[i++];
        else    res[k++]=b[j++];
    }
    if(i==a.size()) while(j<b.size()) res[k++]=b[j++];
    if(j==b.size()) while(i<a.size()) res[k++]=a[i++];
}
int mergesortFORinversion(vector<int> &v){
    int count=0;
    int n=v.size();
    if(n==1) return 0;
    int n1=n/2 , n2=n-n/2;
    vector<int> a(n1) , b(n2);
    //copy pasting
    for(int i=0;i<n1;i++)
        a[i] = v[i];
    for(int i=0;i<n2;i++)
        b[i] = v[i+n1];
    //magic aka recursion
    count += mergesortFORinversion(a);
    count += mergesortFORinversion(b);
    //count the inversion
    count += Inversions(a,b);
    //merge
    merge(a,b,v);
    a.clear();
    b.clear();
    return count;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(arr,arr+n);//same as arr,copy
    // int count = 0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]>arr[j]) count++;
    //     }
    // }
    // cout<<count;
    cout<<"Inversions count : "<<mergesortFORinversion(v);
    return 0;
}