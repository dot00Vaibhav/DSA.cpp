// //[01] address of function variable and main variable
// #include<iostream>
// using namespace std;
// int fun(int x,int y){
//     cout<<"Address of function X "<<&x<<endl;
//     cout<<"Address of function Y "<<&y<<endl;
// }
// int main(){
//     int x=7,y=0;
//     cout<<"Address of main X "<<&x<<endl;
//     cout<<"Address of main Y "<<&y<<endl;
//     fun(x,y);
//     return 0;
// }

// //[02] Default values :
// #include<iostream>
// using namespace std;
// int f(int x = 1,float y = 1.4){
//     cout<<x<<" "<<y;
// }
// int main(){
//     f();
//     return 0;
// }