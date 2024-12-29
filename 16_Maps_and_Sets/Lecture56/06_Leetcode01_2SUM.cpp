#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// //Method 01: Brute force O(n2)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j] == target){
//                     ans.push_back(j);
//                     ans.push_back(i);
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };

//Mthod 02: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> map;
        for(int i=0;i<n;i++){
            int rem = target - nums[i];
            if(map.find(rem)!=map.end()){
                ans.push_back(i);
                ans.push_back(map[rem]);//map[rem] gives index to the rem value inside map
                return ans;
            }
            else map[nums[i]] = i;
        }
        return ans;
    }
};
int main(){
    return 0;
}