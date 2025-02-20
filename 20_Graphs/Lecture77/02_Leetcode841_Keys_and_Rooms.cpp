#include<iostream>
#include<unordered_set>
#include<vector>
#include<queue>
using namespace std;


class Solution {
    public://can do the same problem with the help of DFS
        bool canVisitAllRooms(vector<vector<int>>& rooms) {
            unordered_set<int> visited;
            queue<int> q;
            q.push(0);
            visited.insert(0);
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                for(int neighbour: rooms[curr]){
                    //neighbour not yet visited
                    if(visited.count(neighbour) == 0){
                        q.push(neighbour);
                        visited.insert(neighbour);
                    }
                }
            }
            return visited.size() == rooms.size();
        }
    };


int main(){
    return 0;
}