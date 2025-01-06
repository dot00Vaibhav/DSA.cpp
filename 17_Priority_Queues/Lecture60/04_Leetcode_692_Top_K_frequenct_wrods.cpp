#include<iostream>
#include<string>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }

        
        // Min-heap with custom sorting logic for correct order
        auto cmp = [](const pair<int,string>& a, const pair<int,string>& b) {
            if(a.first == b.first) return a.second > b.second;  // Lexicographically smaller word first
            return a.first < b.first;  // Higher frequency first
        };
        priority_queue< pair<int,string> , vector<pair<int,string>>, decltype(cmp) > pq;
        for(auto entry : mp){
            string key = entry.first;
            int val = entry.second;
            pq.push({val,key});
        }
        vector<string> result;
        while(k-- && !pq.empty()){
            pair<int,string> curr = pq.top();
            pq.pop();
            result.push_back(curr.second);
        }
        return result;
    }
};
int main(){
    return 0;
}