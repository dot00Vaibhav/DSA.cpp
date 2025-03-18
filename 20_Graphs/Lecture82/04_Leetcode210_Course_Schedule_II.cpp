#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void courseGraph(vector<vector<int>>& prerequisites,vector<list<int> >& graph, int numCourses){
        graph.resize(numCourses);
        int n = numCourses;//no. of rows
        for(auto x : prerequisites){
            int a = x[0];
            int b = x[1];
            graph[b].push_back(a);  // Add edge from b to a.
        }
        return;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<list<int> > graph ;
        courseGraph(prerequisites,graph,numCourses);

        int v = graph.size();

        //kahn's algorithm
        vector<int> indegree(v,0);
        for(int i=0;i<v;i++){
            for(auto neighbour : graph[i]){
                //i -> neighbour
                indegree[neighbour]++;
            }
        }

        queue<int> q;
        for(int i=0;i<v;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        vector<int> ans;
        int count = 0;

        while(!q.empty()){
            int node = q.front();
            
            ans.push_back(node);

            q.pop();
            count++;

            for(auto neighbour : graph[node]){//go to all the neighbour of the node
                indegree[neighbour]--;
                if (indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }
        
        bool flag = true;
        for(int i = 0;i < indegree.size();i++){
            if(indegree[i] != 0) flag = false;
        }

        if(flag == true) return ans;

        return {};
    }
};

int main(){
    return 0;
}