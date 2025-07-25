// 386. Lexicographical Numbers
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> result;
    void f(int i ,int n){
        if(i > n) return;//don't do anything
        if(i <= n & i != 0){//it does not include the i when 0 as not required in the question
            result.push_back(i);
        }
        if(i != 0){
            for(int j=0;j<=9;j++){
                f(10*i + j,n);
            }
        }
        else{
            for(int j = 1;j<=9;j++){
                f(10*i + j,n);
            }
        }
    }
    vector<int> lexicalOrder(int n) {
        result.clear();
        f(0,n);
        return result;
    }
};
int main(){
    return 0;
}