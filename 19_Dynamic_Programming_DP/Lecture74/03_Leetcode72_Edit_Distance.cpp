#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
public:
    int dp[505][505];
    int f(string s1,string s2,int i,int j){
        if(i == s1.size()) return s2.size() - j;
        if(j == s2.size()) return s1.size() - i;

        if(dp[i][j] != -1) return dp[i][j];
        
        if(s1[i] == s2[j]) return dp[i][j] = f(s1,s2,i+1,j+1);
        // return dp[i][j] = min({1+f(s1,s2,i+1,j+1),1+f(s1,s2,i+1,j),1+f(s1,s2,i,j+1)});
        return dp[i][j] = min(1+f(s1,s2,i+1,j+1),min(1+f(s1,s2,i+1,j),1+f(s1,s2,i,j+1)));
    }
    int minDistance(string word1, string word2) {
        // memset(dp,-1,sizeof dp);
        // return f(word1,word2,0,0);


        memset(dp,0,sizeof dp);
        //base case
        for(int j = 0;j < 505;j++){
            dp[word1.size()][j] = word2.size()-j;
        }
        for(int i = 0;i < 505;i++){
            dp[i][word2.size()] = word1.size()-i;
        }

        for(int i = word1.size()-1;i>=0;i--){
            for(int j = word2.size()-1;j>=0;j--){
                if(word1[i] == word2[j]) dp[i][j] = dp[i+1][j+1];
                // else dp[i][j] = min({1+dp[i+1][j+1],1+dp[i+1][j],1+dp[i][j+1]});
                else dp[i][j] = min(1+dp[i+1][j+1],min(1+dp[i+1][j],1+dp[i][j+1]));
            }
        }
        return dp[0][0];
    }
};

int main(){
    return 0;
}