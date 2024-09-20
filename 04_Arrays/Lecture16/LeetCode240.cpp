//[01] Leetcode :- 240
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0;
    int j = n - 1;
    while(i<=m-1 && j>=0){
        if(matrix[i][j] == target) return true;
        else if(matrix[i][j] > target) j--;
        else i++;
    }
    return false;
}
int main(){
    int m;
    cout<<"rows = ";
    cin>>m;
    int n;
    cout<<"columns = ";
    cin>>n;
    int target;
    cout<<"Enter Target = ";
    vector< vector<int> >v;
    for(int i=0;i<m;i++){
        vector<int>a;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    bool Ans = searchMatrix(v,target);
    cout<<endl<<Ans;
    return 0;
}