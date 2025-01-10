// Knapsack Problem 
/**  In this problem, we have a knapsack with a weight capacity of W. We have a set of items, each with a weight and a value.
We need to determine the number of each item to include in a collection so that the total weight is less than or equal to W and
the total value is as large as possible.**/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> &p1,pair<int,int> &p2){
    //pair<int,int> first-> profit , second-> weight
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}
double fractionalKnapsack(vector<int> &progits,vector<int> &weights,int n ,int w){
    // TC: O(nlogn) and SC: O(sorting algo space)
    vector<pair<int,int>> arr;
    for(int i = 0;i<n;i++){
        arr.push_back({progits[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),cmp);//us pair ke hisab se karo jiski profit/weight ratio jyada ho
    double result = 0;
    for(int i=0;i<n;i++){
        if(arr[i].second <= w){
            result += arr[i].first;
            w -= arr[i].second;
        }else{//w > arr[i].second
            result += ((arr[i].first*1.0)/(arr[i].second*1.0))*w;
            w = 0;
            break;
        }
    }
    return result;
}
int main(){
    vector<int> profit = {60,100,120};
    vector<int> weight = {10,20,30};
    int n = 3;
    int w = 50;
    cout<<fractionalKnapsack(profit,weight,n,w)<<endl;
    return 0;
} 
//  Output: 240 
