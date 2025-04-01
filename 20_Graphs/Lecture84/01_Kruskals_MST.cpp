#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int find(vector<int>& parent, int a){
    if(parent[a] == a){
        return a;
    }
    return parent[a] = find(parent, parent[a]);
}

void Union(vector<int>& par, vector<int>& rank, int a, int b){
    a = find(par,a);
    b = find(par,b);

    if(a == b) return;

    if(rank[a] >= rank[b]){
        rank[a]++;
        par[b] = a;
    }else{
        rank[b]++;
        par[a] = b;
    }
}

struct Edge{
    int src;
    int dest;
    int wt;
};

bool cmp(Edge e1, Edge e2){
    return e1.wt < e2.wt;
}

ll kruskals(vector<Edge> &input, int n, int e){//O(V + E * logE)
    sort(input.begin(), input.end(), cmp);//ElogE
    vector<int> parent(n+1);
    vector<int> rank(n+1, 1);

    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }

    int edgeCount = 0;
    int i = 0;
    ll ans = 0;
    while(edgeCount < n-1 && i < input.size()){//V-1 => O(Vlog*V) => O(V)
        Edge curr = input[i];//because the input is sorted so we will get the min wt edge
        int srcPar = find(parent, curr.src);
        int destPar = find(parent, curr.dest);

        if(srcPar != destPar){
            //include edge as this will not create cycle 
            Union(parent, rank, srcPar, destPar);
            ans += curr.wt;
            edgeCount++;
        }

        i++;//doesnt matter you picked the last edge or not , we still need to go to the next edge
    }

    return ans;
}

int main(){
    int n, e;
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i = 0; i < e; i++){
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskals(v, n, e)<<endl;
    return 0;
}