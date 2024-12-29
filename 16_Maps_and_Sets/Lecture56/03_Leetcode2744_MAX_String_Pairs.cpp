// 2744. Maximum Number of String Pairs
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& arr) {
//         int n = arr.size();
//         int count = 0;
//         for(int i=0;i<n-1;i++){
//             string rev = arr[i];
//             reverse(rev.begin(),rev.end());
//             for(int j=i+1;j<n;j++){
//                 if(rev==arr[j]) count++;
//             }
//         }
//         return count;
//     }
// };

//Method 02: better
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& arr) {
//         int n = arr.size();
//         unordered_set<string> s;
//         int count = 0;
//         for(int i=0;i<n;i++) s.insert(arr[i]);//O(n)
//         for(int i=0;i<n;i++){//O(n)
//             string rev = arr[i];
//             reverse(rev.begin(),rev.end());
//             if(rev==arr[i]) continue;
//             if(s.find(rev)!=s.end()){//O(1)
//                 count++;
//                 s.erase(arr[i]);
//             }
//         }
//         return count;
//     }
// };

//method 03: best
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        unordered_set<string> s;
        int count = 0;
        for(int i=0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev)!=s.end()) count++;
            else s.insert(arr[i]);
        }
        return count;
    }
};
int main(){
    return 0;
}