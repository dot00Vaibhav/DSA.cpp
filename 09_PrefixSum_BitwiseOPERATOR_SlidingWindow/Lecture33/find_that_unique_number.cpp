//Given an integer array where every element occurs twice except one occurs only once. find that number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of the array n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = 0;
    for(int i=0;i<n;i++){
        result = result ^ arr[i];
    }
    cout<<"The number which occurs only one times is "<<result<<endl;
    return 0;
}