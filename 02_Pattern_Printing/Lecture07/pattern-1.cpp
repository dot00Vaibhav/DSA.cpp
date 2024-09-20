// //[01] PRINT THE PATTERN OF SOLID RECTANGLE.
// /* r=3(rows) , c=4(column)
// * * * *
// * * * *
// * * * *
// */
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int r, c;//if : r=c then it will be solid square.
// //     cout<<"Enter the number of rows : ";
// //     cin>>r;
// //     cout<<"Enter the number of column : ";
// //     cin>>c;
// //     for(int i=0;i<r;i++){
// //         for(int j=0;j<c;j++){
// //             cout<<"* ";
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// //[02] NUMBER SQUARE .
// /*
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[03] STAR TRIANGLE.
// /*
// *
// * *
// * * *
// * * * *
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[04]REVERSE STAR TRIANGLE.
// /*
// (1)* * * *
// (2)* * *
// (3)* *
// (4)*
// */
// //M - 1 :
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// //M - 2 :
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     no. of stars = n + 1 - i
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[05] NUMBER TRIANGLE.
// /*
// 0
// 0 1
// 0 1 2
// 0 1 2 3
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<=i-1;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[06] ODD NUMBER TRIANGLE
// /*
// 1
// 1 3
// 1 3 5
// 1 3 5 7
// */
// // //M - 1:
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the number of rows : ";
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //         // first "i" odd numbers.
// //         for(int j=1;j<=2*i-1;j+=2){
// //             cout<<j<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// // //M - 2:
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the number of rows : ";
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //         // first "i" odd numbers.
// //         int a = 1;
// //         for(int j=1;j<=i;j++){
// //             cout<<a<<" ";
// //             a+=2;
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// //[07] FLIPPED STAR TRIANGLE
// /*
//       *
//     * *
//   * * *
// * * * *
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         //spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //star
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[08] NUMBER TRIANGLE FLIPPED
// /*
//       1
//     1 2
//   1 2 3
// 1 2 3 4
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         //spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //number
//         for(int k=1;k<=i;k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     return 0;
// }