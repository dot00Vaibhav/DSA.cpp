#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // pair<string, char> p;
    // p.first = "vaibhav";
    // p.second = 'A';
    unordered_map<string , int> m; 
    // Insertion : 1st way
    pair<string, int> p1;
    p1.first = "raghav";
    p1.second = 76;
    pair<string, int> p2;
    p2.first = "Harsh";
    p2.second = 15;
    pair<string, int> p3;
    p3.first = "lokesh";
    p3.second = 49;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    //printing
    // for(pair<string , int> ele : m){
    //     cout<<ele.first<<" "<<ele.second<<endl;
    // }

    // Insertion : 2nd way
    m["vaibhav"] = 45;
    m["virat"] = 18;
    m["dhoni"] = 7;


    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    cout<<"Size of map : "<<m.size()<<endl;
    m.erase("raghav");
    m.erase("Harsh");
    m.erase("Sanket"); // no error if key is not present
    
    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<"Size of map : "<<m.size()<<endl;

    return 0;
}