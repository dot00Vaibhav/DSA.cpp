// //[01] Write a function to compute the greatest common divisor or HCF of two given numbers.
// #include<iostream>
// using namespace std;
// int HCF(int a, int b){
//     int HCF =1;
//     // 24 , 60 
//     // i = 24,23,22,21,..... 1
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i == 0 && b%i == 0){// i is a common factor.
//             HCF =i;
//             break;
//         }
//     }
//     return HCF;
// }
// int main(){
//     int a;
//     cout<<"Enter the first number ";
//     cin>>a;
//     int b;
//     cout<<"Enter the 2nd number ";
//     cin>>b;
//     cout<<HCF(a,b);
//     return 0;
// }

// //[02] Print factorials upto n numbers.
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int fact = 1;
//     for(int i =2;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<fact(i)<<endl;
//     }
//     return 0;
// }

// //[03] Swap two numbers.
// //M-1 : by creating another variable
// #include<iostream>
// using namespace std;
// void swap(int a, int b){
//     int t ;
//     t = a;
//     a = b;
//     b = t;
//     cout<<"Now, "<<"a = "<<a<<" "<<"b = "<<b;
// }
// int main(){
//     int a;
//     cout<<"a = ";
//     cin>>a;
//     int b;
//     cout<<"b = ";
//     cin>>b;
//     swap(a,b);
//     return 0;
// }
// //M-2 : Without using the third variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"a = ";
//     cin>>a;
//     int b;
//     cout<<"b = ";
//     cin>>b;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<a<<" "<<b;
//     return 0;
// }