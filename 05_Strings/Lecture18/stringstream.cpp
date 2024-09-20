#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str = "raghav is   a matchs teacher";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}