//[01] FIND THE NEXT PERMUTATION OF ARRAY.
//NOTE :- IF NOT POSSIBLE THEN PRINT THE ARRAY IN SORTED ORDER ( ASCENDING ORDER ) -> LEETCODE:31
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //(1) for finding the pivot element
        int idx = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //(2) sorting/reverse after pivot index
        reverse(nums.begin()+(idx+1),nums.end());
        //(3)finding the just greater element than the idx element.
        int j = -1;
        for(int i=idx+1;i<n;i++){
            if(nums[i] > nums[idx]){
                j = i;
                break;
            }
        }
        //(4) swaping elements of idx and j
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return;
    }//this code is correct but here it is giving the wrong output
int main(){
    vector<int>v;
    int n;
    cout<<"size = ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    nextPermutation(v);
    cout<<"NEXT PERMUTATION OF THE ARRAY : ";
    for(int i=0;i<n;i++){
        cout<<v.at(i)<<" ";
    }
    return 0;
}