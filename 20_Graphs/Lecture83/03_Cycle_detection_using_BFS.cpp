#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;//no. of vertices
void add_edge(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}


bool bfs(int src){
    unordered_set<int> vis;
    queue<int> q;
    vector<int> parent(v,-1);
    q.push(src);
    vis.insert(src);

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(vis.count(neighbour) and parent[curr] != neighbour){
                //cycle detected
                return true;
            }
            if(!vis.count(neighbour)){
                vis.insert(neighbour);
                parent[neighbour] = curr;
                q.push(neighbour);
            }
        }
    }
    return false;
}

bool has_cycle(){
    unordered_set<int> visited;
    bool result = false;
    for(int i = 0;i < v;i++){
        if(!visited.count(i)){
            result = bfs(i);
            if(result == true) return true;
        }
    }
    return false;
}



int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    
    // display();

    bool b = has_cycle();
    cout<<b<<endl;
    return 0;
}