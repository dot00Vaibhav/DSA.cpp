#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;//no. of vertices
void add_edge(int src,int dest,bool bi_dir = true){//this function will make graph
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end){
    if(curr == end) return true;

    visited.insert(curr);//mark visited
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){//count gives 1 if inserted o/w 0
            bool result = dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
}

bool anyPath(int src,int end){
    return dfs(src,end);
}


int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        // add_edge(s,d);//for undirectional
        add_edge(s,d,false);//for directional
    }
    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y)<<endl;
    return 0;
}