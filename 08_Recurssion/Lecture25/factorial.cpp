//Factorial using Recursion.
#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==1 || n==0) return 1;
    //recursive call
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int ans = fact(n);
    cout<<ans;
    return 0;
}