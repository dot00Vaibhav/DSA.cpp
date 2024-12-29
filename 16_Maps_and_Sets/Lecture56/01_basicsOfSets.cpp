#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    cout<<s.size()<<endl; // 4
    s.erase(1);
    cout<<s.size()<<endl; // 3
    int target = 4;
    if(s.find(target) != s.end()){//exists
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    // for each loop
    for(int ele : s){
        cout << ele << " ";
    }
}