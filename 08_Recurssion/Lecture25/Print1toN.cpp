//Print 1 to N
// //M-1:(using extra parameter)
// #include<iostream>
// using namespace std;
// void print(int i, int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     print(1,n);
//     return 0;
// }
//M-2: without using extra parameter.
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    print(n);
    return 0;
}