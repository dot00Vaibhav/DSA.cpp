// 2389. Longest Subsequence With Limited Sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n = nums.size();
    int m = queries.size();
    vector<int> ans(m);
    //sort nums
    sort(nums.begin(),nums.end());//T.C. = O(nlon(n)) , S.C. = O(log(n))
    //make nums prefix sum
    for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }
    //    for(int i=0;i<m;i++){//T.C. = O(n*m)
    //        int len=0;
    //        for(int j=0;j<n;j++){
    //            if(nums[j]>queries[i]) break;
    //            len++;
    //        }
    //        ans[i]=len;
    //    }
    //    return ans;//Overall T.C. = O(n*(m+log(n)))
    for(int i=0;i<m;i++){//T.C. = O(mlog(n))
        int maxLen=0;
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>queries[i]) hi=mid-1;
            else{//nums[mid]<=queries[i]
                maxLen = mid+1;
                lo=mid+1;
            }
        }
        ans[i]=maxLen;
    }
    return ans;
}
int main(){
    return 0;
}