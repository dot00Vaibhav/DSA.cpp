#include<bits/stdc++.h>
using namespace std;

void permutations(string& str, int i){
    if(i == str.size()-1){
        cout<<str<<" ";
        return ;
    }
    unordered_set<char> s;
    for(int idx = i; idx < str.size(); idx++){
        //proning step : means we will not get the answer on going forward
        if(s.count(str[idx])) continue;
        
        s.insert(str[idx]);
        swap(str[idx], str[i]);
        permutations(str, i+1);
        //backtracking step
        swap(str[idx], str[i]);
    }
}

int main(){
    string str = "aba";
    permutations(str, 0);
    return 0;
}