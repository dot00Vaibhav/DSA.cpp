#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;
    // s.insert(2);
    // s.insert(1);
    // s.insert(3);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    
    map<int, int> m;
    // (1, 20), (2, 30), (3, 10)
    m[2] = 30;
    m[3] = 10;
    m[1] = 20;
    for(auto ele : m){
        // cout<<ele.first<<" ";
        cout<<ele.second<<" ";
    }

    // unordered_map<int, int> m;
    // // (1, 20), (2, 30), (3, 10)   
    // m[2] = 30;
    // m[3] = 10;
    // m[1] = 20;
    // m[4]++;
    // cout<<m[4]<<endl;
    return 0;
}