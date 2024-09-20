// //[01] Print all the elements of an array/vector using recursion.
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(int arr[],int n,int idx){
//     if(idx==n) return;
//     cout<<arr[idx]<<" ";
//     display(arr,n,idx+1);
// }
// void display2(vector<int>&v,int idx){
//     if(idx==v.size()) return;
//     cout<<v[idx]<<" ";
//     display2(v,idx+1);
// }
// int main(){
//     int arr[] = {2,1,6,3,9,0,2,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // display(arr,n,0);
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         v[i]=arr[i];
//     }
//     display2(v,0);
//     return 0;
// }

// //[02] Find out the maximum value of the array using recursion
// #include<iostream>
// #include<climits>
// using namespace std;
// void PrintMaxValue(int arr[],int n,int idx,int max){
//     if(idx==n){//base case
//         cout<<"Maximum value of the index is "<<max<<endl;
//         return;
//     }
//     if(max<arr[idx]) max=arr[idx];
//     PrintMaxValue(arr,n,idx+1,max);
// }
// int maxvalue(int arr[],int n,int idx){
//     if(idx==n) return INT_MIN;
//     return max(arr[idx],maxvalue(arr,n,idx+1));
// }
// int main(){
//     int arr[] = {2,1,6,3,9,0,2,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     //PrintMaxValue(arr,n,0,INT_MIN);
//     cout<<maxvalue(arr,n,0)<<endl;
//     return 0;
// }

//[03] Remove all occurance of 'a' from string.
#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans,string original){//S.C. is vey high
    if(original.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(ch=='a') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}
void removeChar2(string ans,string original,int idx){
    if(idx==original.size()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(ch=='a') removeChar2(ans,original,idx+1);
    else removeChar2(ans+ch,original,idx+1);
}
int main(){
    string str = "aman";
    removeChar2("",str,0);
    return 0;
}