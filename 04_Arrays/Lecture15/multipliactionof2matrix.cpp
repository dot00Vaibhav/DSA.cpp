//[01] WAP TO PRINT THE MULTIPLICATION OF TWO MATRICES GIVEN BY THE USER.
#include<iostream>
using namespace std;
int main(){
    int m;//rows
    cout<<"rows of 1st matrix = ";
    cin>>m;
    int n;
    cout<<"column of 1st matrix = ";
    cin>>n;

    int p;
    cout<<"rows of 2nd matrix = ";
    cin>>p;
    int q;
    cout<<"columns of 2nd matrix = ";
    cin>>q;

    if(n==p){
        int a[m][n];
        cout<<"Enter elements of 1st matrix : \n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Elements of 2nd matrix : \n";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                //re[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j]
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<"Multiplied matrix : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{//n != p
        cout<<"The Matix can not be multipiled!!";
    }
    return 0;
}