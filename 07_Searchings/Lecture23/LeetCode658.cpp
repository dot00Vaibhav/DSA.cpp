//[03] Find k closest elements.         [LeetCode-658]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    //S.C. = O(k)
    //T.C. = O(logn + klogk)
    int n = arr.size();
    vector<int> ans(k);//k elements ko insert karungaa
    if(x<arr[0]){
        for(int i=0;i<k;i++){
            ans[i] = arr[i];
        }
        return ans;
    }
    if(x>arr[n-1]){
        int i = n-1;
        int j = k-1;
        while(j>=0){
            ans[j] = arr[i];
            i--;
            j--;
        }
        return ans;
    }
    int lo = 0;
    int hi = n-1;
    bool flag = false;//if element is present arr or not
    int t = 0;//repersenting the index of the arr
    int mid = -1;
    //binary search
    while(lo<=hi){
        mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag = true;//element is present
            ans[t] = arr[mid];
            t++;
            break;
        }else if(arr[mid]>x) hi = mid - 1;
        else lo = mid + 1;
    }
    int lb = hi;
    int ub = lo;
    if(flag==true){
        lb = mid-1;
        ub = mid+1;
    }
    while(t<k && lb>=0 && ub<=n-1){
        int d1 = abs(x-arr[lb]);
        int d2 = abs(x-arr[ub]);
        if(d1<=d2){
            ans[t] = arr[lb];
            lb--;
        }
        else{//d1 > d2
            ans[t] = arr[ub];
            ub++;
        }
        t++;
    }
    if(lb<0){
        while(t<k){
            ans[t] = arr[ub];
            ub++;
            t++;
        }
    }
    if(ub>n-1){
        while(t<k){
            ans[t] = arr[lb];
            lb--;
            t++;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int k;
    cout<<"k = ";
    cin>>k;
    int x;
    cout<<"element x = ";
    cin>>x;
    vector<int> arr(n);
    cout<<"Enter the element in the arr : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = findClosestElements(arr,k,x);
    cout<<k<<" closest element to the "<<x<<" are ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<", ";
    }
    return 0;
}