// //WAP TO PRINT THE MATRIX IN THE WAVE FORM.
// // Question 1 :- row wise proining [1 2 3 6 5 4 7 8 9] 
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
//     //wave portion
//     for(int i=0;i<m;i++){
//         if(i % 2 != 0){
//             for(int j=n-1;j>=0;j--){
//                 cout<<a[i][j]<<" ";
//             }
//         }else {
//             for(int j=0;j<n;j++){
//                 cout<<a[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }

//Question 2 :- column wise printing [1 4 7 2 5 8 3 6 9]
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
    for(int j=0;j<n;j++){
        if(j % 2 == 0){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }else{
            for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
    return 0;
}