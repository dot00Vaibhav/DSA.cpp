//Insertion Sort :
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Elements of the arrays are :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int ele : arr){//for each loop
        cout<<ele<<" ";
    }
    //Insertion sort
    for(int i=1;i<n;i++){
        int j = i;
        // while(j>=1){
        //     if(arr[j] >= arr[j-1]) break;
        //     else if(arr[j] < arr[j-1]) swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>=1 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}