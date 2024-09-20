// //[01] Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.
// #include<iostream>
// using namespace std;
// int findsum(int a,int b){
//     if(a>b) return 0;
//     if(a % 2 == 0) return findsum(a+1,b);
//     return a + findsum(a+2,b);
// }
// int main(){
//     int a;
//     cout<<"a = ";
//     cin>>a;
//     int b;
//     cout<<"b = ";
//     cin>>b;
//     cout<<"sum of the odd numbers b|w "<<a<<" and "<<b<<" is "<<findsum(a,b);
//     return 0;
// }

// //[02] Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 steps at each level.
// #include<iostream>
// using namespace std;
// int main(){
//     return 0;
// }

//[03] Given a positive integer, return true if it is a power of 2.
#include<iostream>
using namespace std;
bool powerOf2(int n){
    if(n==1) return true;
    if(n % 2 == 0) return powerOf2(n/2);
    return false;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<powerOf2(n);
    return 0;
}