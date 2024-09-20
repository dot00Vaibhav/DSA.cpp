//Find out wether the given string is palindrome or not using recursion.

#include<iostream>
using namespace std;
bool Ispalindrome(string str){//Method 1 : iterative solution
    int i=0;
    int j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
}
bool isPalindrome(string s,int i,int j){//Method 2 : Rrcursive solution
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPalindrome(s,i+1,j-1);
}
int main(){
    string str = "racecar";
    // int ans = Ispalindrome(str);
    int ans = isPalindrome(str,0,str.size()-1);
    if(ans==1) cout<<"Is palindrome";
    else cout<<"Not a palindrome";
    return 0;
}