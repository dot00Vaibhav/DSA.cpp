#include<iostream>
using namespace std;
int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';//here the subtraction from '0' is because to get the reference and it will act as the indexs  of the element.
        result = result + num*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string str = "001011";
    cout<<binary_to_decimal(str)<<endl;
    return 0;
}