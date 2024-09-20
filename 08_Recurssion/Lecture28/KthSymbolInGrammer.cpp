//K-th symbol in the Grammer
#include<iostream>
using namespace std;
int kthGrammar(int n, int k) { //Time Complexity :- O(n)
    if(n==1) return 0;
    if(k%2==0){//when  k is evem :- flip answer,n-1,k/2
        int prevAns = kthGrammar(n-1,k/2);
        if(prevAns==0) return 1;
        else return 0;
    }
    else{//when k is odd :- same answer,n-1,k/2+1
        int prevAns = kthGrammar(n-1,(k/2)+1);
        return prevAns;
    }
}
int main(){
    int k;
    cout<<"K = ";
    cin>>k;
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<kthGrammar(n,k);
    return 0;
}