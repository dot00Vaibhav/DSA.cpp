//Write a function to calculate the nth fibonacci number using recursion.
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    int leftAns = fibo(n-1);
    int rightAns = fibo(n-2);
    return leftAns + rightAns;
}
int main(){
    //1 1 2 3 5 8 13 21 34 55 89..... 
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<fibo(n);
    return 0;
}