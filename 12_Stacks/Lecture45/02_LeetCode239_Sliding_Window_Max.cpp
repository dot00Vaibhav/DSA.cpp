#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        int ngi[n];
        stack<int> st;
        ngi[n-1] = n+1;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
            if(st.size()==0) ngi[i] = n+1;
            else ngi[i] = st.top();
            st.push(i);
        }

        //Important part
        vector<int> ans;
        int j = 0;
        for(int i=0;i<n-k+1;i++){
            if(j<i) j=i;
            int mx = arr[j];
            while(j < i+k){
                mx = arr[j];
                if(ngi[j] >= (i+k)) break;
                j = ngi[j];
            }
            ans.push_back(mx);
        }
        return ans;
    }
};
int main(){
    return 0;
}