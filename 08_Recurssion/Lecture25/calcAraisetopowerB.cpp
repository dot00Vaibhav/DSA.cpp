//Make a function which calculates 'a' raised to power 'b' using recursion.
#include<iostream>
using namespace std;
int powerloops(int a,int b){
    if(a==0 && b==0) return -100;
    if(a==0) return 0;
    int p = 1;
    for(int i=1;i<=b;i++){
        p = p*a;
    }
    return p;
}
int powerRec(int a,int b){
    if(a==0 && b==0) return -100;
    if(a==0) return 0;
    if(b==0) return 1;//this is the base case
    return a*powerRec(a,b-1);
}
int main(){
    int a;
    cout<<"enter base = ";
    cin>>a;
    int b;
    cout<<"enter exponent = ";
    cin>>b;
    cout<<a<<" raised to power "<<b<<" will be "<<powerRec(a,b);
    return 0;
}