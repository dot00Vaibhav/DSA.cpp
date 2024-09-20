//Stair Path : we have to find the number of possible combination or ways
#include<iostream>
using namespace std;
int stair(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    cout<<"Enter the number of stairs : ";
    cin>>n;
    cout<<"Number of possible combinations are "<<stair(n);
    return 0;
}