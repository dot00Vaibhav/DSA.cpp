//Generate all the binary strings of length n without consecutive 1`s.
#include<iostream>
using namespace std;
void generateBinary(string str,int n){
    if(str.size()==n){
        cout<<str<<endl;
        return;
    }
    generateBinary(str+"0",n);
    if(str=="" || str[str.length()-1]=='0') generateBinary(str+"1",n);
}
int main(){
    int n = 3;
    generateBinary("",n);
    return 0;
}