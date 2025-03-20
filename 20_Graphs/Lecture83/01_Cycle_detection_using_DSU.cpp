#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int find(vector<int>& parent , int x){
    // this method returns which group/cluster x belongs to 
    // TC :- O(log* n)
    return parent[x] = (parent[x] == x) ? x : find(parent,parent[x]);
}

bool Union(vector<int>& parent , vector<int>& rank,int a,int b){
    a = find(parent,a);
    b = find(parent,b);

    if(a == b) return true;//if both a[parent] and b[parent] are same then there exists a cycle

    if(rank[a] >= rank[b]){
        rank[a]++;
        parent[b] = a;
    }else{
        rank[b]++;
        parent[a] = b;
    }
    return false;
}

int main(){

    int n,m;
    cin>>n>>m;
    // n -> number of element , m -> no of queries
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);

    for(int i=0;i<=n;i++){
        parent[i] = i;
    }

    while(m--){//O(E x log* E)
        int x,y;
        cin>>x>>y;
        bool b = Union(parent,rank,x,y);
        if(b == true) cout<<"cycle detected"<<endl;
    }
    return 0;
}