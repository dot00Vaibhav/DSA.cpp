#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// public:
//     int findCenter(vector<vector<int>>& edges) {
//         bool flag = false;//means 2nd vertices of the first pair is central node
//         if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]){
//             flag = true;//means 1st is central node
//             return edges[0][0];
//         }
//         else{
//             if(edges[0][1] == edges[1][0] || edges[0][1] == edges[1][1]){
//                 flag = false;
//                 return edges[0][1];
//             }
//         }
//         if(flag == true) return edges[0][0];
//         else return edges[0][1];
//     }
// };


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0];
        int b = edges[0][1];

        int c = edges[1][0];
        int d = edges[1][1];

        return (c == a || c == b) ? c : d; 
    }
};


int main(){
    return;
}