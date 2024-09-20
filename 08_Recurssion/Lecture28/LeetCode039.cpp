//Combination Sum.      [LeetCode-039]
#include<iostream>
#include<vector>
using namespace std;
void CombinationSum(vector<int> v,int arr[],int n,int target,int idx){
    if(target<0) return;
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        CombinationSum(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[] = {2,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    CombinationSum(v,arr,n,7,0);
    return 0;
}//Commbination - II