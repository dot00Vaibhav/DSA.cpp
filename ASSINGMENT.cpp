// //[01] Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     int a[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             a[i][j] = 10;
//         }
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[02] Write a program to add two matrices and save the result in one of the given matrices.
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     int b[3][3] = {4,5,8,0,0,8,1,2,0};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             a[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[03] Write a program to print the elements of both the diagonals in a square matrix.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     int a[n][n];
//     cout<<"Enter the elements of the array : \n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"Elements of diagonals : \n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j == n-1 || i == j){
//                 cout<<a[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[04] Write a program to rotate the matrix by 90 degrees anti-clockwise.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Rows and Columns = ";
//     cin>>m;
//     int a[m][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int k=0;k<m;k++){
//         int i=0;
//         int j=m-1;
//         while(i <= j){
//             int temp = a[k][j];
//             a[k][j] = a[k][i];
//             a[k][i] = temp;
//             i++;
//             j--;
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=i+1;j<m;j++){
//             swap(a[i][j],a[j][i]);
//         }
//     }
//     cout<<endl<<"Matrix after rotating 90 deg. to the anti-clockwise : \n";
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[05] Write a program to print the matrix in wave form.    7 4 1 2 5 8 9 6 3
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int j=0;j<3;j++){
//         if(j%2==0){
//             for(int i=3;i>=0;i--){
//                 cout<<a[i][j]<<" ";
//             }
//         }else{
//             for(int i=0;i<3;i++){
//                 cout<<a[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }

//leetcode - 59 [Assingment question]