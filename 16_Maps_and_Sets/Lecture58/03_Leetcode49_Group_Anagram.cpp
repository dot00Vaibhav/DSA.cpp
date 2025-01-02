// 49. Group Anagrams
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(string st : strs){
            string lexo = st;
            sort(lexo.begin(),lexo.end());
            if(mp.find(lexo)==mp.end()){//not exists
                // vector<string> v;
                // v.push_back(st);
                // mp[lexo] = v;
                mp[lexo].push_back(st);//as the second argument is vector<string> so we can directly push_back
            }
            else{//exists
                mp[lexo].push_back(st);
            }
        }
        for(auto st : mp){
            ans.push_back(st.second);
            // vector<string> v = st.second;
            // ans.push_back(v);
        }
        return ans;
    }
};
int main(){
    return 0;
}