// 1046. Last Stone Weight
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> hp(stones.begin(),stones.end());
        while(hp.size() > 1){
            int x = hp.top();//1st max
            hp.pop();
            int y = hp.top();//2nd max
            hp.pop();
            
            int sub = abs(x-y);
            if(sub != 0) hp.push(sub);
        }
        if(hp.size() == 0) return 0;
        return hp.top();
    }
};
int main(){
    return 0;
}