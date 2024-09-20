// 1402. Reducing Dishes
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        int suf[n];
        sort(satisfaction.begin(),satisfaction.end());
        suf[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+satisfaction[i];
        }
        //find the pivot index
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        //Max sum of like-time coefficient
        int x=1;
        int maxSum=0;
        for(int i=idx;i<n;i++){
            maxSum+=(satisfaction[i]*x);
            x++;
        }
        return maxSum;
    }
int main(){
    return 0;
}