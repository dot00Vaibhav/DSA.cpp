// //[01] PASSING ARRAY TO FUNCTION.
// #include<iostream>
// using namespace std;
// void display(int a[],int size){ //here we can write "int *a" as "int a[]" is also taking address and "int a[]" or "int *a" both are pointer.
//     for(int i = 0; i <= size-1; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// void update(int b[],int size){
//     b[0] = 100;
// }
// int main(){
//     int arr[5] = {2,45,1,5,2};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<size<<endl;
//     //accessing the elements of the array in another function.
//     //updation, pass by value / reference ?
//     display(arr,size);
//     update(arr,size);
//     display(arr,size);
//     return 0;
// }

// //[02] POINTERS AND ARRAYS :
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int *ptr = arr; //giving address
//     cout<<ptr<<endl;
//     //ptr[0] = 8;
//     //for(int i = 0; i <= 5; i++){
//     //    cout<<ptr[i]<<" ";   //i[ptr] = i[arr] = ptr[i] = arr[i]
//     //}
//     for(int i = 0; i <= 5; i++){
//         cout<<*ptr<<" ";
//         ptr++;
//     }
//     cout<<endl;
//     ptr = arr; //ptr is pointing to 1st element
//     *ptr = 8; //ptr[0] = 8
//     ptr++;    //ptr is pointing to 2nd element
//     *ptr = 9;
//     ptr--;    //ptr is pointing to 1st element
//     for(int i = 0; i <= 5; i++){
//         cout<<*ptr<<" ";
//         ptr++;
//     }
//     ptr = arr;
//     return 0;
// }

// //[03] VECTORS BASICS :
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;   //you need not to mention the size.
//     // inserting / input do not use [].
//     v.push_back(6);
//     v.push_back(1);
//     v.push_back(9);
//     v.push_back(0);
//     // if you want to update / access
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
//     return 0;
// }

// //[04] OPERATIONS ON VECTORS : push_back()
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     for(int i = 0; i <v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     for(int i = 0; i <v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// //[05] SIZE AND CAPACITY :
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     cout<<"Size = "<<v.size()<<endl;
//     cout<<"Capacity = "<<v.capacity()<<endl;
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     cout<<"Size = "<<v.size()<<endl;
//     cout<<"Capacity = "<<v.capacity();
//     return 0;
// }

// //[06] INITIALISATION OF THE VECTOR :
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     vector<int>x(5);    // Initial size = capacity = 5 ,as each of the element have value 0
//     vector<int>y(4,7); // each element will have the initial value of 7
//     return 0;
// }

// //[07] VECTOR INPUT :
// // //M - 1 : WITH SIZE
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     vector<int>v(1);//here giving the size of the vector is very important.
// //     for(int i = 0; i < v.size(); i++){
// //         cin>>v[i];
// //     }
// //     for(int i = 0; i < v.size(); i++){
// //         cout<<v[i]<<" ";
// //     }
// //     return 0;
// // }
// //M - 2 : WITHOUT SIZE
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     for(int i = 0; i < 5; i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i = 0; i < v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// //[08] USE OF AT AND SORT :
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(45);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     // v.at(2)=90;
//     // cout<<v.at(2);
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     //sort
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     return 0;
// }

// //[09] passing vector to function :
// //BY DEFAULT VECTORS ARE PASSED BY VALUE.
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<int>a){
//     a[0] = 100;
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     change(v);//this will print the changed output because "cout" is used in the function.
//     for(int i=0;i<v.size();i++){//Here the original values of the vector will not change.
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// //[10] USING PASS BY REFERENCE : 
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<int>&a){//Here "&" is used so the vector is passed by reference.
//     a[0] = 100;
//     // for(int i=0;i<a.size();i++){
//     //     cout<<a[i]<<" ";
//     // }
//     // cout<<endl;
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     change(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// //[11] FIND THE LAST OCCURRENCE(INDEX) OF X IN THE ARRAY.
// // //M - 1 : FORWARD LOOP
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     vector<int>v;
// //     v.push_back(9);
// //     v.push_back(10);
// //     v.push_back(6);
// //     v.push_back(12);
// //     v.push_back(11);
// //     v.push_back(6);
// //     v.push_back(0);
// //     int x = 6;
// //     int idx = -1;
// //     for(int i = 0;i < v.size();i++){
// //         if(v[i] == x) idx = i;//this is because if the variable x is already present in the vector befor so for the last occurance we have to continue the loop.
// //     }
// //     if(idx == -1) cout<<"ELEMENT X IS NOT PRESENT";
// //     else cout<<"INDEX = "<<idx;
// //     return 0;
// // }
// //M - 2 : REVERSE LOOP
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(9);
//     v.push_back(10);
//     v.push_back(6);
//     v.push_back(12);
//     v.push_back(11);
//     v.push_back(6);
//     v.push_back(0);
//     int x = 62;
//     bool flag = false;
//     for(int i = v.size()-1;i >= 0;i--){
//         if(v[i] == x) {
//             cout<<"INDEX = "<<i;
//             flag = true;
//             return -1;
//         }
//     }
//     if(flag == false) cout<<"ELEMENT IS NOT PRESENT!!";
//     return 0;
// }

// //[12] FIND THE DOUBLET IN THE ARRAY WHOSE SUM IS EQUAL TO THE GIVEN VALUE X.
// //LEETCODE - 1 : TWO SUM
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int x;
//     cout<<"ENTER TARGET : ";
//     cin>>x;
//
//     vector<int>v;
//     int n;
//     cout<<"ENTER THE ARRAY SIZE : ";
//     cin>>n;
//
//     cout<<"Enter the elements of Array : ";
//     for(int i = 0;i < n;i++){
//         int p;
//         cin>>p;
//         v.push_back(p);
//     }
//
//     for(int i = 0;i < v.size();i++){
//         for(int j = i + 1;j < v.size();j++){
//             if(v[i] + v[j] == x) cout<<"("<<i<<","<<j<<")"<<endl;
//         }
//     }
//     return 0;
// }

// //[13] WAP TO COPY THE CONTENTS OF ONE ARRAY INTO THE ANOTHER IN THE REVERSE ORDER.
//M - 1 : FORWARD LOOP
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"ENTER THE ARRAY SIZE : ";
//     cin>>n;
//     cout<<"Enter the elements of Array : ";
//     for(int i = 0;i < n;i++){
//         int p;
//         cin>>p;
//         v.push_back(p);
//     }
//     vector<int>R(n);
//     for(int i = 0;i < n;i++){
//         R[i] = v[n-i-1];
//     }
//     cout<<"ELEMENTS OF REVERSE ARRAY : ";
//     for(int i = 0;i < n;i++){
//         cout<<R[i]<<" ";
//     }
//     return 0;
// }

// //[14] WAP TO REVERSE THE ARRAY WITHOUT USING ANY EXTRA ARRAY.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"ENTER THE ARRAY SIZE : ";
//     cin>>n;
//
//     cout<<"Enter the elements of Array : ";
//     for(int i = 0;i < n;i++){
//         int p;
//         cin>>p;
//         v.push_back(p);
//     }
//     //REVERSE
//     int i = 0;
//     int j = v.size()-1;
//     while(i <= j){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
//     //reverse(v.begin(),v.end());//In-Built function.
//     cout<<"ELEMENTS OF REVERSED ARRAY : ";
//     for(int i = 0;i < n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// //[15] reverse part of a VECTOR.
// #include<iostream>
// #include<vector>
// using namespace std;
// void reversedpart(vector<int>&v,int i,int j){
//     while(i <= j){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
// int main(){
//     vector<int>v;
//     int n;
//     cout<<"ENTER THE ARRAY SIZE : ";
//     cin>>n;
// 
//     cout<<"Enter the elements of Array : ";
//     for(int i = 0;i < n;i++){
//         int p;
//         cin>>p;
//         v.push_back(p);
//     }
// 
//     reversedpart(v,0,2);
// 
//     cout<<"ELEMENTS OF ARRAY AFTER REVERSED : ";
//     for(int i = 0;i < n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// //[16] ROTATE THE GIVEN ARRAY 'a' BY K STEPS, WHERE K IS NON NEGATIVE. {rotation of an array problem}
// //NOTE : k can be greater than n as well where n is the size of the array 'a'.
// #include<iostream>
// #include<vector>
// using namespace std;
// void reversepart(vector<int>&a,int i,int j){
//     while(i <= j){
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
// void display(vector<int>a){
//     for(int i = 0;i < a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     return;
// }
// int main(){
//     vector<int>a;
//     int n;
//     cout<<"ENTER THE ARRAY SIZE : ";
//     cin>>n;
// 
//     cout<<"Enter the elements of Array : ";
//     for(int i = 0;i < n;i++){
//         int p;
//         cin>>p;
//         a.push_back(p);
//     }
//     int k;
//     cout<<"ENTER THE NUMBER OF ROTATION : ";
//     cin>>k;
//     if(k > n) k = k % n;
//     reversepart(a,0,n-1-k);
//     reversepart(a,n-k,n-1);
//     reversepart(a,0,n-1);
//     cout<<"ARRAY AFTER ROTATION : ";
//     display(a);
//     return 0;
// }