#include<iostream>
#include<vector>
using namespace std;

// class Solution {//this code will give you Memory limit Exceeded error
// public:
//     vector<vector<string> > dp;
//     string f(string s1,string s2,int i,int j){
//         if(i == 0) return s2.substr(0,j);//i=0 means s1 is empty
//         if(j == 0) return s1.substr(0,i);//j=0 means s2 is empty

//         if(dp[i][j] != "") return dp[i][j];

//         if(s1[i-1] == s2[j-1]){//if equals the add the character
//             dp[i][j] = f(s1,s2,i-1,j-1)+s1[i-1];
//         }else{//if not equals than does not include the character
//             string option1 = f(s1,s2,i-1,j)+s1[i-1];//include ith character and decrease i
//             string option2 = f(s1,s2,i,j-1)+s2[j-1];//include jth character and decrease j
//             dp[i][j] = (option1.length() < option2.length()) ? option1 : option2;
//         }
//         return dp[i][j];
//     }
//     string shortestCommonSupersequence(string str1, string str2) {
//         dp.clear();
//         dp.resize(1005,vector<string> (1005,""));
//         int n = str1.size();//i
//         int m = str2.size();//j
//         return f(str1,str2,n,m);
//     }
// };

//watch video in yt and solve 

int main(){
    return 0;
}