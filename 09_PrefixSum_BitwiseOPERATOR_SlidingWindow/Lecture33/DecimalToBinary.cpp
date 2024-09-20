#include<iostream>
using namespace std;
string Decimal_to_Binary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){//even
            result = "0" + result;
        }else{//odd
            result = "1" + result;
        }
        num = num >> 1;
    }
    return result;
}
int main(){
    int num = 5;
    cout<<Decimal_to_Binary(num);
    return 0;
}