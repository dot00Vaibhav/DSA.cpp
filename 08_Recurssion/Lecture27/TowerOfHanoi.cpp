//Tower of Hanoi Problem.
#include<iostream>
using namespace std;
void Hanoi(int n,char a,char b,char c){//a->source,b->helper,c->destination
    if(n==0) return;
    Hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    Hanoi(n-1,b,a,c);
}
int main(){
    int n=3;
    Hanoi(n,'A','B','C');
    return 0;
}