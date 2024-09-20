// 204. Count Primes
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    void fillSieve(vector<bool>& sieve){
        int n = sieve.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            if(sieve[i]==1){
                for(int j=i*2;j<=n;j+=i){
                    sieve[j] = false;
                }
            }
        }
    }
    int countPrimes(int n) {
        if(n<=2) return 0;
        n -= 1;
        int count = 0;
        vector<bool> sieve(n+1,true);// 1 means prime , 0 means not prime
        fillSieve(sieve);
        sieve[0] = false;
        sieve[1] = false;
        for(int i=2;i<=n;i++){
            if(sieve[i]==1) count++;
        }
        return count;
    }
};
int main(){
    return 0;
}