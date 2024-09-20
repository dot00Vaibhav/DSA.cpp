//[01] leetcode -119 I have to do It in homework
#include<iostream>
#include<vector>
using namespace std;
vector<int> getRow(int rowIndex) {
    vector< vector<int> >v;
    vector<int>P(rowIndex+1);
    for(int i=1;i<=rowIndex+1;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    for(int i=0;i<=rowIndex;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) v[i][j] = 1;
            else v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
    for(int j=0;j<=rowIndex;j++){
        P[j] = v[rowIndex][j];
    }
    return P;
}
int main(){
    int m;
    cout<<"size of the row : ";
    cin>>m;
    vector<int>v = getRow(m);
    //print
    for(int i=0;i<=m;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}