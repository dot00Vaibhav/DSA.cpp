// 781. Rabbits in Forest
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        // TC = O(n) and SC = O(n)
        unordered_map<int,int> mp;
        int result = 0;
        for(int i=0;i<answers.size();i++){
            if(!mp[answers[i] + 1]){
                result += answers[i]+1;//we started a new color group
                if(answers[i] == 0) continue;
                mp[answers[i] + 1] = 1;
            }
            else{
                mp[answers[i] + 1]++;
                int key = answers[i] + 1;
                int value = mp[answers[i] + 1];//respective color ke kitno freq hai
                if(key == value){
                    //we found all the rabits of the group
                    //erase the group
                    mp.erase(key);
                } 
            }
        }
        return result;
    }
};
int main(){
    return 0;
}