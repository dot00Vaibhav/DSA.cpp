// //[01] Checking if a number is Prime Number or not.
// #include<iostream>
// #include<Cmath>
// using namespace std;
// bool isPrime1(int n){
//     if(n==1) return false;
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i == 0) return false;
//     }
//     return true;
// }
// bool isPrime2(int n){
//     if(n==1) return false;
//     for(int i=2;i<n;i++){
//         if(n%i == 0) return false;
//     }
//     return true;
// }
// int main(){
//     cout<<isPrime1(1001);
//     return 0;
// }

//[02] Leetcode problem [2614]


//[03] Finding Factors of a number.
#include<iostream>
#include<cmath>
using namespace std;
void primeFactors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            cout<<i<<" ";
            if(i!=sqrt(n)) cout<<(n/i)<<" ";
        }
    }
}
int main(){
    primeFactors(49);
    return 0;
}


//[04] LeetCode 507 -> Perfect Number
//[05] LeetCode 2507 -> Smallest value after replacing with sum of prime factors.
//[06] LeetCode 204 -> Count prime
//[07] LeetCode 2521 -> Distinct Prime Factors of Product of Array.
//[08] LeetCode 650 -> 2 Keys Keyboard
//[09] LeetCode 263 -> Ugly Number
