//[01] Sum of square Numbers.           [LeetCode-633]
#include<iostream>
#include<cmath>
using namespace std;
bool isperfectsquare(int n){
    int root = sqrt(n);
    if(root*root == n) return true;
    else return false;
}
bool judgeSquareSum(int c) {
    int x = 0;
    int y = c;
    while(x<=y){
        if(isperfectsquare(x) && isperfectsquare(y)) return true;
        else if(!isperfectsquare(y)){
            y = (int)sqrt(y)*(int)sqrt(y);
            x = c-y;
        }else{//x is not perfect square
            x = (int)(sqrt(x)+1)*(int)(sqrt(x)+1);
            y = c-x;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    bool ans = judgeSquareSum(n);
    cout<<ans;
    return 0;
}