//power function(logarithmic)
#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    int ans = power(x,n/2);
    if(n%2==0) return ans*ans;
    else return ans*ans*x;
}
int main(){
    int x;
    cout<<"Enter base : ";
    cin>>x;
    int n;
    cout<<"Enter power : ";
    cin>>n;
    cout<<power(x,n);
    return 0;
}