//[01] Functions calling itself.
#include<iostream>
using namespace std;
// void fun(){//runs infinitely becoz terminating condition are not given
//     cout<<"Hello World"<<endl;
//     fun();
// }
void recursion(int n){
    if(n==0) return;
    cout<<"Hellow Vaibhav"<<endl;
    recursion(n-1);
}
int main(){
    // fun();
    recursion(3);
    return 0;
}