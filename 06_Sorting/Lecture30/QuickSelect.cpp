//Write a program to find the kth smallest element in an array using quick sort.
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
int kthsmallest(int arr[],int si,int ei,int k){
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthsmallest(arr,pi+1,ei,k);
    else return kthsmallest(arr,si,pi-1,k);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<k<<"th smallest element is "<<kthsmallest(arr,0,n-1,k)<<".";
    return 0;
}//solve this question in the leetcode.