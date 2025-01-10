#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minProduct(vector<int> &arr){
    int cn = 0, cz = 0,cp = 0;
    int prod_positive = 1;
    int prod_negative = 1;
    int largest_negative = INT8_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i] < 0){
            cn++;
            prod_negative *= arr[i];
            largest_negative = max(largest_negative,arr[i]);
        }
        if(arr[i] == 0) cz++;
        if(arr[i] > 0){
            cp++;
            prod_positive *= arr[i];
        }
    }
    if(cn == 0){//negative numbers does not exists
        if(cz > 0) return 0;
        else{
            auto it = min_element(arr.begin(),arr.end());
            return *it;
        }
    }
    else{
        if(cn%2 == 0){
            //even 
            return (prod_positive/largest_negative) * prod_negative;
        }
        else{
            //odd
            return prod_negative * prod_positive;
        }
    }
}
int main(){
    // vector<int> arr = {-2,-3, 1, 4, -2};
    vector<int> arr = {2, 3, 1, 4, 2, 0};
    // vector<int> arr = {-2,-3, 1, 4, -2, -5};
    cout<<minProduct(arr)<<endl;
    return 0;
}