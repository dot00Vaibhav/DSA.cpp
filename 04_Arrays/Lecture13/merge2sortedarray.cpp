//[01] MERGE TWO SORTED ARRAY. //leetcode - 88
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&a1,vector<int>&a2){
    int n = a1.size();
    int m = a2.size();
    vector<int>res(m+n);//res->resultant
    int i = 0;//a1
    int j = 0;//a2
    int k = 0;//res
    while(i < n && j <m){
        if(a1[i] <= a2[j]){
            res[k] = a1[i];
            i++;
        }else{//a2[j] < a1[i]
            res[k] = a2[j];
            j++;
        }
        k++;
    }
    //for remaining(when the elements of one of the vector is filled into the resultant vector)
    if(i==n){//a1 ke sare element utha chuka hu
        while(j<m){
            res[k] = a2[j];
            j++;
            k++;
        }
    }
    if(j==m){//a2 ke sare element utha chuka hu
    while(i<n){
            res[k] = a1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main(){
    vector<int>a1(4);
    a1[0] = 1;
    a1[1] = 4;
    a1[2] = 5;
    a1[3] = 8;
    cout<<"ARRAY 'a1' : ";
    for(int i=0;i<a1.size();i++){
        cout<<a1[i]<<" ";
    }
    cout<<" ";

    vector<int>a2(6);
    a2[0] = 2;
    a2[1] = 3;
    a2[2] = 6;
    a2[3] = 7;
    a2[4] = 10;
    a2[5] = 12;
    cout<<"ARRAY 'a2' : ";
    for(int i=0;i<a2.size();i++){
        cout<<a2[i]<<" ";
    }
    cout<<endl;
//Here the vectors a1 and a2 are already sorted.
    vector<int>v = merge(a1,a2);

    cout<<"ARRAY 'v' AFTER MERGING AND SORTING : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}