// 188. Best time to buy ans sell stocks IV.
#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
using namespace std;

class Solution {
public:
    int dp[1005][105][2];
    int f(vector<int> &prices,int i,int k,bool on){
        if(i == prices.size()) return 0;
        if(dp[i][k][on] != -1) return dp[i][k][on];
        int ans = INT_MIN;
        ans = f(prices,i+1,k,on);//avoid current stock
        if(on){//on -> true means already purchase you have to sell
            ans = max(ans,prices[i] + f(prices,i+1,k-1,false));//false in that place because now you sold and the one transaction is completed
        }
        else{//this means you have to buy and start new trasaction
            if(k>0){
                ans = max(ans,f(prices,i+1,k,true)-prices[i]);//
            }
        }
        return dp[i][k][on] = ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp, -1, sizeof dp);
        return f(prices,0,k,false);
    }
};

int main(){
    return 0;
}

//similar question :- Best time to buy ans sell stocks III [ just put the value of k in this question 2 ]