#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i+1]){//kmin
            kmin = max(kmin,(float)(arr[i]+arr[i+1])/2);
        }else{//kmax
            kmax = min(kmax,(float)(arr[i]+arr[i+1])/2);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag == false) cout<<-1;
    else if(kmin==kmax){
        if(kmin - (int)kmin == 0){//this means kmin and kmax are integers
            cout<<"There is only one value of k : "<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin - (int)kmin > 0){
            kmin = (int)kmin + 1;
        }
        cout<<"Range of k is : ["<<kmin<<","<<(int)kmax<<"]";
    }
    return 0;
}