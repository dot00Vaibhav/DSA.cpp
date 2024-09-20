// //[01] Basics of the 2D vectors:- vectors of vectors.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);

//     vector<int>v2;
//     v2.push_back(4);
//     v2.push_back(5);

//     vector<int>v3;
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);

//     vector< vector<int> >v; //{{1,2,3},{4,5},{6,7,8,9,10}}
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);

//     cout<<v[0][0];
//     return 0;
// }

// //[02] 2D arrays into the function.
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(int a[]){
//     a[0] = 9;
// }
// //It is very important to write the size of the array in the bracket to run the programm.
// void change2D(int arr[3][3]){
//     arr[0][0] = 100;
// }
// int main(){
//     // int a[3] = {1,2,3};
//     // cout<<a[0]<<endl;
//     // change(a);
//     // cout<<a[0]<<endl;
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     cout<<arr[0][0]<<endl;
//     change2D(arr);
//     cout<<arr[0][0]<<endl;
//     return 0;
// }

// //[03] 2D vector to the function.
// #include<iostream>
// #include<vector>
// using namespace std;
// void change2Dvector(vector< vector<int> >&v){
//     v[0][0] = 100;
// }
// int main(){
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);

//     vector<int>v2;
//     v2.push_back(4);
//     v2.push_back(5);

//     vector<int>v3;
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);

//     vector< vector<int> >v; //{{1,2,3},{4,5},{6,7,8,9,10}}
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);

//     cout<<v[0][0]<<endl;
//     change2Dvector(v);
//     cout<<v[0][0]<<endl;
//     return 0;
// }

// //[04] Initialisation of the vector.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector< vector<int> >v(3,vector<int> (4,2));
    
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[0].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"Number of rows = "<<v.size()<<endl;
//     cout<<"NUmber of columns = "<<v[0].size();
//     return 0;
// }