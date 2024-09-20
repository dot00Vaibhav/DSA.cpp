//LeetCode - 169
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int MajorityElement(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n/2];
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    int majele = MajorityElement(v);
    cout<<"Majority Element : "<<majele<<".";
    return 0;
}