// 451. Sort Characters By Frequency
#include<iostream>
#include<string>
#include<unordered_map>
#include<queue>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue< pair<int,char> > pq;
        for(auto entry : mp){
            char key = entry.first;
            int val = entry.second;
            pq.push({val,key});
        }
        string result = "";
        while(!pq.empty()){
            pair<int,char> curr = pq.top();
            pq.pop();
            for(int i=0;i<curr.first;i++){
                result += curr.second;
            }
        }
        return result;
    }
};
int main(){
    return 0;
}