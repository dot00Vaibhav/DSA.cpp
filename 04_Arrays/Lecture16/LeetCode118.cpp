//[01] Given an integer numRows, return the first numRows of Pascal's triangle.
//Leetcode : 118
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascal(int numRows) {
    vector< vector<int> >v;
    //pushing the vectors to the 2D vectors
    for(int i=1;i<=numRows;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    //generate
    for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) v[i][j] = 1;
            else v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
    return v;
}
int main(){
    int m;
    cout<<"Number of rows of the pascal triangle : ";
    cin>>m;
    vector< vector<int> > v = pascal(m);
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}