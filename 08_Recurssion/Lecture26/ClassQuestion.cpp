/*
input   output
1       111
2       211121112
3       321112111232111211123
*/
#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
    return;
}
int main(){
    cout<<endl;
    zigzag(3);
    return 0;
}