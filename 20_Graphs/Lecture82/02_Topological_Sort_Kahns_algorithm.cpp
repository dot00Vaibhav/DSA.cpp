#include<bits/stdc++.h>
using namespace std;


vector<list<int> > graph;
int v;//no. of vertices

void add_edge(int a, int b, bool bidir = true){
    graph[a].push_back(b);
    if(bidir) graph[b].push_back(a);
}


void topoBFS(){
    //kahn's algorithm
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto neighbour : graph[i]){
            //i -> neighbour
            indegree[neighbour]++;
        }
    }

    queue<int> q;
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
            vis.insert(i);
        }
    }

    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();
        for(auto neighbour : graph[node]){//go to all the neighbour of the node
            if(!vis.count(neighbour)){//if not visited
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}


int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,list<int> ());
    while(e--){
        int x,y;
        cin>>x>>y;
        add_edge(x,y,false);
    }
    topoBFS();
    return 0;
}