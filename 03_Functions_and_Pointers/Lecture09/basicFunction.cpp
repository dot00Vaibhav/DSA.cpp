// //[01]
// #include<iostream>
// using namespace std;
// void greeting(){//function defining
//     cout<<"Good Morning"<<endl;
//     cout<<"Have a nice day";
// }
// int main(){
//     greeting();//function calling
//     return 0;
// }

// //[02]
// #include<iostream>
// using namespace std;
// void starTriangle(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     starTriangle(3);
//     starTriangle(4);
//     starTriangle(5);
//     return 0;
// }

// //[03] using any inbuilt function
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<"Minimum between "<<x<<" and "<<y<<" is "<<min(x,y);
//     return 0;
// }

// //[04] combination without using function
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter the value of r : ";
//     cin>>r;
//     int nfact = 1;//n!
//     for(int i=2;i<=n;i++){
//         nfact *= i;
//     }
//     int rfact = 1;//r!
//     for(int i=2;i<=r;i++){
//         rfact *= i;
//     }
//     int nrfact = 1;//(n-r)!
//     for(int i=2;i<=n-r;i++){
//         nrfact *= i;
//     }
//     int nCr = nfact/(rfact * nrfact);
//     cout<<n<<" combination "<<r<<" is "<<nCr;
//     return 0;
// }

// //[05] combination and permutation with the help of function
// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f =1;
//     for(int i=2;i<=x;i++){
//         f *= i;
//     }
//     return f;
// }
// int combination(int n,int r){
//     int ncr = fact(n)/(fact(r) * fact(n-r));
//     return ncr;
// }
// int permutation(int n, int r){
//     int nPr = fact(n)/fact(n-r);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter the value of r : ";
//     cin>>r;
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     int nCr = combination(n,r);
//     int nPr = permutation(n,r);
//     cout<<n<<"C"<<r<<" = "<<nCr;
//     cout<<endl;
//     cout<<n<<"P"<<r<<" = "<<nPr;
//     return 0;
// }

// //[06] Pascal Triangle
// /*
// 1
// 1  1
// 1  2  1
// 1  3  3  1
// 1  4  6  4  1   
// 1  5 10 10  5  1
// */
// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f =1;
//     for(int i=2;i<=x;i++){
//         f *= i;
//     }
//     return f;
// }
// int combination(int n,int r){
//     int ncr = fact(n)/(fact(r) * fact(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     cout<<"Enter n = ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<combination(i,j)<<" "; //iCj
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[07] Pascal triangle optimised
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n = ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         int curr = 1;
//         for(int j=0;j<=i;j++){
//             cout<<curr<<" ";
//             curr = curr * (i-j)/(j+1); //here curr-> reffers to the next value 
//         }
//         cout<<endl;
//     }
//     return 0;
// }