//LeetCode :-455
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            count++;
            i++;
            j++;
        }else j++;
    }
    return count;
}
int main(){
    vector<int> g;
    g.push_back(10);
    g.push_back(9);
    g.push_back(8);
    g.push_back(7);
    vector<int> s;
    s.push_back(5);
    s.push_back(6);
    s.push_back(7);
    s.push_back(8);
    int childcontent = findContentChildren(g,s);
    cout<<"children content : "<<childcontent;
    return 0;
}