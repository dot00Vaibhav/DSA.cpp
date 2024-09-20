// 507. Perfect Number
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    int primeFactors(int n){
        int sumOfFactors = 0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i == 0){
                if(i!=sqrt(n)){
                    sumOfFactors = sumOfFactors + i;
                    sumOfFactors = sumOfFactors + n/i;
                }
            }
        }
        return sumOfFactors;
    }
    bool checkPerfectNumber(int num) {
        int sumOfFactors = primeFactors(num);
        if((sumOfFactors - num) == num) return true;
        else return false;
    }
};
int main(){
    // int k = 47;
    // bool n = Solution.checkPerfectNumber(k);
    return 0;
}