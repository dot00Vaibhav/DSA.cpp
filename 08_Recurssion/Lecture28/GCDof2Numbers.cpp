//Calculate GCD of two numbers using recursion.
#include<iostream>
using namespace std;
int gcd(int a,int b){//T.C. = O(min(a,b))
    for(int i=min(a,b);i>=2;i--) if(a%i==0 || b%i==0) return i;
    return 1;
}
// int HCF(int a,int b){
//     if(max(a,b)%min(a,b)==0) return min(a,b);
//     HCF(max(a,b)%min(a,b),min(a,b));
// }
int HCF(int a,int b){
    if(a==0) return b;
    else return HCF(b%a,a);
}
int main(){
    int a = 27;
    int b = 45;
    cout<<HCF(a,b);
    return 0;
}