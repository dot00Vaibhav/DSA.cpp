#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement = arr[(si+ei)/2];//setting 1st element as the pivot element 
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }//after the completion of loop we will get total number of smaller element then the pivotElement
    int pivotIndex = count + si;//pivotIndex equals to starting index plus total number of smaller elements then the pivotElement.
    swap(arr[(si+ei)/2],arr[pivotIndex]);//swaping pivotElement and element of pivotIndex
    int i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex){//collecting all the elements less than pivotElement towards left and same for the largest element.
        if(arr[i]<pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    // 5,1,8,2,7,6,3,4
    int pi = partition(arr,si,ei);
    // 4 1 3 2 5 7 8 6
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[] = {8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout<<endl<<"Array after sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}