#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int find(vector<int>& parent , int x){
    // this method returns which group/cluster x belongs to 
    // TC :- O(log* n)
    return parent[x] = (parent[x] == x) ? x : find(parent,parent[x]);
}

void Union(vector<int>& parent , vector<int>& rank , vector<int>& sz , vector<int>& minimal , vector<int>& maximal ,int a,int b){
    a = find(parent,a);
    b = find(parent,b);

    if(a == b) return;//both a and b are same set

    if(rank[a] >= rank[b]){
        rank[a]++;
        parent[b] = a;
        sz[a] += sz[b];
        maximal[a] = max(maximal[a],maximal[b]);
        minimal[a] = min(minimal[a],minimal[b]);
    }else{
        rank[b]++;
        parent[a] = b;
        maximal[b] = max(maximal[a],maximal[b]);
        minimal[b] = max(minimal[a],minimal[b]);
    }

}


void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main(){

    file_i_o();

    int n,m;
    cin>>n>>m;
    // n -> number of element , m -> no of queries
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    vector<int> sz(n+1,1);
    vector<int> minimal(n+1);
    vector<int> maximal(n+1);

    for(int i=0;i<=n;i++){
        parent[i] = minimal[i] = maximal[i] = i;
    }

    while(m--){
        string str;
        cin>>str;
        if(str == "union"){
            int x,y;
            cin>>x>>y;
            Union(parent,rank,sz,minimal,maximal,x,y);
        }else{
            int x;
            cin>>x;
            x = find(parent,x);
            cout<<minimal[x]<<" "<<maximal[x]<<" "<<sz[x]<<endl;            
        }
    }
    return 0;
}