//Given an integer n, find the maximum power of two that is smaller than n.
#include<iostream>
using namespace std;
int max_power_of2(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n+1)>>1;
}
int main(){
    int x;
    cout<<"x = ";
    cin>>x;
    int t = x;
    int temp;
    while(x>0){
        temp = x;
        x = x & (x-1);
    }
    cout<<"value just less than the integer "<<t<<" is "<<temp<<endl;
    int y;
    cout<<"Y = ";
    cin>>y;
    cout<<"value just less than the integer "<<y<<" is "<<max_power_of2(y);
    return 0;
}