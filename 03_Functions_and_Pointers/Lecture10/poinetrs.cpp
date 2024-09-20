// //[01] WRITE A PROGRAMM TO CALCULATE THE SUM OF TWO NUMBERS USING POINTERS.
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout<<"Enter the value of a = ";
//     cin>>a;
//     cout<<"Enter the value of b = ";
//     cin>>b;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     cout<<"sum of two numbers will be : "<<*ptr1+*ptr2;
//     return 0;
// }

// // //[02] TAKING INPUT USING THE POINTER.
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     int*p1 = &x;
//     int*p2 = &y;
//     cout<<"Enter the first number : ";
//     cin>>*p1;
//     cout<<"Enter the second number : ";
//     cin>>*p2;
//     return 0;
// }

// //[03] USING PASS BY REFERENCE TO SWAP THE TWO VARIABLE
// //M-1:
// #include<iostream>
// using namespace std;
// int swap(int *x,int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return 0;
// }
// int main(){
//     int a = 8 , b = 6;
//     int *x = &a;
//     int *y = &b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }
// //M-2: pass by reference using alias.
// #include<iostream>
// using namespace std;
// int swap(int &x,int &y){
//     int temp = x;
//     x = y;
//     y = temp;
//     return 0;
// }
// int main(){
//     int a = 2,b = 5;
//     swap(a,b);
//     cout<<a<<" "<<b;
//     return 0;
// }

// //[04] POOINTER ARITHMETIC :
// #include<iostream>
// using namespace std;
// int main(){
//     // int x = 10;
//     // int *p = &x;
//     // cout<<p<<endl;  //0x61ff08
//     // p = p + 1;
//     // cout<<p;        //0x61ff0c
//     bool a = 10;
//     bool *p = &a;
//     cout<<p<<endl;  //0x61ff0b
//     p = p + 1;
//     cout<<p;        //0x61ff0c
//     return 0;
// }

// //[05] WRITE A FUNCTION TO FIND THE FIRST AND LAST DIGIT OF ANY NUMBER WITHOUT RETURNING ANYTHING.
// #include<iostream>
// using namespace std;
// void find(int n, int *ptr1, int *ptr2){
//     *ptr2 = n % 10; //lastdigit
//     while(n > 9){
//         n /= 10;
//     }
//     *ptr1 = n;
//     return;
// }
// int main(){
//     int x;
//     cin>>x;
//     int firstdigit, lastdigit;
//     int *ptr1 = &firstdigit;
//     int *ptr2 = &lastdigit;
//     find(x,ptr1,ptr2);
//     cout<<"first digit = "<<firstdigit<<endl;
//     cout<<"last digit = "<<lastdigit;
//     return 0;
// }

// //[06] NULL POINTER : reserved address.
// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr1 = NULL;//initialising the pointer becouse it is giving different addresses after every run .
//     int *ptr2 = 0;
//     int *ptr3 = '\0';
//     cout<<ptr1<<" "<<ptr2<<" "<<ptr3;//0x0
//     return 0;
// }