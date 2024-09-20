//very important topic - pre In post
#include<iostream>
using namespace std;
void pipo(int n){
    if(n==0) return;
    cout<<"Pre "<<n<<endl;
    pipo(n-1);
    cout<<"In "<<n<<endl;
    pipo(n-1);
    cout<<"Post "<<n<<endl;
}
int main(){
    pipo(3);
    return 0;
}