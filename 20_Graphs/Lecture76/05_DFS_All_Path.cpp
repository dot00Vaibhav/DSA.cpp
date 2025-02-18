#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;//no. of vertices
void add_edge(int src,int dest,bool bi_dir = true){//this function will make graph
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end,vector<int> &path){
    if(curr == end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(curr);//mark visited
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){//count gives 1 if inserted o/w 0
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void allPath(int src,int end){
    vector<int> v;
    dfs(src,end,v);
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
        add_edge(s,d);//for undirectional
        // add_edge(s,d,false);//for directional
    }
    int x,y;
    cin>>x>>y;
    allPath(x,y);

    cout<<"[ "<<endl<<endl<<" ";
    for(auto path : result){
        cout<<"{ ";
        for(auto el : path){
            cout<<el<<" ";
        }
        cout<<"}"<<endl<<" ";
    }
    cout<<endl<<"] ";

    return 0;
}