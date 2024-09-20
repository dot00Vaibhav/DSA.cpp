//[01] MOVE ALL THE NEGATIVE NUMBERS TO BEGINNING AND 
//POSITIVE TO THE END WITH CONSTANT EXTRA SPACE.
#include<iostream>
#include<vector>
using namespace std;
void swap01(vector<int>&v,int i,int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    return;
}
int main(){
    vector<int>v;
    int n;
    cout<<"ENTER THE ARRAY SIZE : ";
    cin>>n;
    cout<<"Enter the elements of Array : \n";
    for(int i = 0;i < n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int i = 0;
    int j = n-1;
    while(i < j){
        if(v[i] < 0) i++;
        if(v[j] >= 0) j--;
        if(i > j) break;
        if(v[i] >= 0 && v[j] < 0){
            swap01(v,i,j);
            i++;
            j--;
        }
    }
    cout<<"ELEMENT OF THE ARRAY AFTER MOVING : \n";
    for(int i = 0;i < n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}