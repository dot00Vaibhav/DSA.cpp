#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> result;

    void f(vector<int>& cand, int t, int idx, vector<int>& subsets){
        if(t == 0){
            //we found a subset which sums the target
            result.push_back(subsets);
            return;
        }
        if(idx == cand.size()) return;
        if(cand[idx] <= t){
            //pick
            subsets.push_back(cand[idx]);
            f(cand, t-cand[idx], idx, subsets);
            subsets.pop_back();
        }
        //avoid
        int j = idx+1;

        f(cand, t, j, subsets);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> subsets;
        result.clear();
        f(candidates, target, 0, subsets);
        return result;
    }
};


int main(){
    return 0;
}