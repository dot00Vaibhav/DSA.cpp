// //[01] RH0MBUS
// /*
//    ****
//   ****
//  ****
// ****
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         //for spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //for stars
//         for(int k=1;k<=n;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[02] STAR PYRAMID
// /*
//    *
//   ***
//  *****
// *******
// */
// //M-1;
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
//         //stars
//         for(int k=1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// //M-2: nst and nsp method.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     int nst = 1;
//     int nsp = n - 1;
//     for(int i=1;i<=n;i++){
//         //for spaces
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;
//         //stars
//         for(int k=1;k<=nst;k++){
//             cout<<"*";
//         }
//         nst+=2;
//         cout<<endl;
//     }
//     return 0;
// }

// //[03] NUMBER PYRAMID PALLINDROME
// //HINT : divide and solve
// /*
//       1             - - -         1
//     1 2 1       =   - -     +   1 2    +    1
//   1 2 3 2 1         -         1 2 3         2 1
// 1 2 3 4 3 2 1               1 2 3 4         3 2 1
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         //for spaces - 1st loop
//         for(int j = 1;j<= n-i;j++){
//             cout<<" ";
//         }
//         //for numbers - 2nd loop
//         for(int k=1;k<=i;k++){
//             cout<<k;
//         }
//         //for reverse numbers - 3rd loop
//         for(int a=i-1;a>=1;a--){
//             cout<<a;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[04] STAR DIAMOND
// /*    *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     //40:00
//     return 0;
// }


// Lets complete it some other time