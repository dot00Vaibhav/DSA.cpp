// 1497. Check If Array Pairs Are Divisible by k
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int ele : arr){
            ele = ((ele % k)+k)%k;
            mp[ele]++;//increase the frequency for each modified element
        }
        if(mp.find(0)!=mp.end()){//'0' exists in the map
            if(mp[0]%2 != 0) return false;
            mp.erase(0);
        }
        for(auto x : mp){//visit in map
            int ele = x.first;
            int rem = k - ele;
            if(mp.find(rem)==mp.end()) return false;
            if(mp[rem] != mp[ele]) return false;
        }
        return true;
    }
};
int main(){
    return 0;
}