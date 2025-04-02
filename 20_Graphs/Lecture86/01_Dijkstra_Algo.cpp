#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;


vector<list<pp>> gr;//{node, dist}
void add_edge(int u, int v, int wt, bool bidir=true){
    gr[u].push_back({v, wt});
    if(bidir) gr[v].push_back({u, wt});
}



//T.C.  ->  O(VlogV + ElogE)
unordered_map<int, int> dijkstra(int src, int n){//n -> number of nodes (can be denoted by V)
    priority_queue<pp, vector<pp> , greater<pp> > pq;//{dist, node}
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int, int> mp;
    
    //Initially the distance is infinity from src to every other node
    for(int i = 0; i < n; i++) mp[i] = INT_MAX;//O(V)

    pq.push({0, src});
    mp[src] = 0;

    while(!pq.empty()){//O((V+E)*logV)
        pp curr = pq.top();//{dist, node}

        //means we got the redundant pair of {dist, node}
        if(vis.count(curr.second)){//means already visited
            pq.pop();
            continue;
        }

        vis.insert(curr.second);
        pq.pop();
        
        //above is working in T.C. of O(logV)

        for(auto neighbour: gr[curr.second]){//O(V + E)
            //neighbour = {node, dist} and mp = {node, dist} and pq = {dist, node}
            if(!vis.count(neighbour.first) && mp[neighbour.first] > neighbour.second + mp[curr.second]){
                pq.push({neighbour.second + mp[curr.second], neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second + mp[curr.second];
            }
        }
    }

    return mp;
}


int main(){
    int n, m;
    cin>>n>>m;
    gr.resize(n, list<pp> ());
    while(m--){
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;

    unordered_map<int, int> sp = dijkstra(src, n);
    int dest;
    cin>>dest;
    cout<<sp[dest]<<endl;
    return 0;
}