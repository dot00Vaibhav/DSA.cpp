//selection sort :
#include<iostream>
#include<climits>
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
    //selection sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        //min index selection from the box
        for(int j=i;j<n;j++){
            if(arr[j] < min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<endl<<"elements in sorted order are \n";
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}