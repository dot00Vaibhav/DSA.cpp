//Print subsets of a string with unique characters.     [LeetCode-78]
// // type:01
// #include<iostream>
// #include<vector>
// using namespace std;
// void StoreSubsets(string ans,string original,int idx,vector<string>& v){
//     if(idx==original.size()){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[idx];
//     StoreSubsets(ans,original,idx+1,v);
//     StoreSubsets(ans+ch,original,idx+1,v);
// }
// int main(){
//     string str = "abc";
//     vector<string> v;
//     StoreSubsets("",str,0,v);
//     for(string ele : v){
//         cout<<ele<<endl;
//     }
//     return 0;
// }
//Follow UP : Do it for array as well
#include<iostream>
#include<array>
#include<vector>
using namespace std;
void printSubset(int arr[],int n,int idx,vector<int> ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans);
}
int main(){
    int arr[] = {1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printSubset(arr,n,0,v);
    return 0;
}