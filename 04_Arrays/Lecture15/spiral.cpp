// //[01] WAP TO PRIN THE MATRIX IN THE SPIRAL.
// //M - 1:
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"rows of matrix = ";
//     cin>>m;
//     int n;
//     cout<<"column of matrix = ";
//     cin>>n;
//     int a[m][n];
//     for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>a[i][j];
//             }
//     }
//     cout<<endl;
//     int minr = 0,minc = 0;
//     int maxr = m-1,maxc=n-1;
//     while (minr <= maxr && minc <= maxc){
//         //Right
//         for(int j=minc;j<=maxc;j++){
//             cout<<a[minr][j]<<" ";
//         }
//         minr++;
//         if(minr > maxr || minc > maxc) break;
//         //Down
//         for(int i=minr;i<=maxr;i++){
//             cout<<a[i][maxc]<<" ";
//         }
//         maxc--;
//         if(minr > maxr || minc > maxc) break;
//         //left
//         for(int j=maxc;j>=minc;j--){
//             cout<<a[maxr][j]<<" ";
//         }
//         maxr--;
//         if(minr > maxr || minc > maxc) break;
//         //up
//         for(int i=maxr;i>=minr;i--){
//             cout<<a[i][minc]<<" ";
//         }
//         minc++;
//         if(minr > maxr || minc > maxc) break;
//     }
//     return 0;
// }

//M - 2:
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"rows of matrix = ";
    cin>>m;
    int n;
    cout<<"column of matrix = ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
    }
    cout<<endl;
    int minr = 0,minc = 0;
    int maxr = m-1,maxc=n-1;
    int tne = m*n;
    int count = 0;
    while (minr <= maxr && minc <= maxc){
        //Right
        for(int j=minc;j<=maxc && count < tne;j++){
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
        //Down
        for(int i=minr;i<=maxr && count < tne;i++){
            cout<<a[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc && count < tne;j--){
            cout<<a[maxr][j]<<" ";
            count++;
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr && count < tne;i--){
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    return 0;
}