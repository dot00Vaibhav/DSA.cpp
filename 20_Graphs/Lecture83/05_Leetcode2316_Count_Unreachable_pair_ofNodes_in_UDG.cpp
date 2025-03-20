#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> parent;
    vector<int> size;

    int find(int i){
        if(parent[i] != i){
            parent[i] = find(parent[i]);
        }
        return parent[i];
    }

    void Union(int i, int j){
        int a = find(i);
        int b = find(j);

        // if (a != b) {
        //     if (size[a] < size[b]) {
        //         swap(a, b); // Ensure `a` is the larger component
        //     }
        //     parent[b] = a; // Attach smaller component to larger one
        //     size[a] += size[b]; // Update the size of the larger component
        // }

        if (a != b) {
            if (size[b] < size[a]) {
                size[a] += size[b]; // merge smaller one into the larger one
                parent[b] = a;
            } else { // size[a] <= size[b]
                size[b] += size[a];
                parent[a] = b;
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        int m = edges.size();

        parent.resize(n);
        size.resize(n);

        for(int i = 0; i < n; i++){
            parent[i] = i;
            size[i] = 1;
        }

        for(int i = 0; i < m; i++){
            int a = edges[i][0];
            int b = edges[i][1];

            Union(a, b);
        }

        int groups = 0;
        // Collect the sizes of all connected components
        vector<int> componentSizes;
        for(int i = 0; i < n; i++){
            if(parent[i] == i) {
                groups++;
                componentSizes.push_back(size[i]);
            }
        }
        
        if(groups == 1) return 0;

        // Calculate the number of pairs
        long long ans = 0;
        long long totalNodes = n;
        for (int s : componentSizes) {
            long long si = (long long)s;

            ans += si * (totalNodes - si);
            totalNodes -= si;
        }

        return ans;
    }
};



int main(){
    return 0;
}