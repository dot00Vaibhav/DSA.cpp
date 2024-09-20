// //print sum from 1 to n.
// //M-1 : PARAMETERISED - means by the use of an extra variable
// #include<iostream>
// using namespace std;
// void sum1toN(int sum,int n){
//     if(n==0){
//         cout<<sum;
//         return;
//     }
//     sum1toN(sum+n,n-1);
// }
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     sum1toN(0,n);
//     return 0;
// }
//M-2 : return type
#include<iostream>
using namespace std;
int sum1toN(int n){
    if(n==0) return 0;
    return n+sum1toN(n-1);
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int sumfrom1toN = sum1toN(n);
    cout<<"sum from 1 to "<<n<<" is "<<sumfrom1toN;
    return 0;
}