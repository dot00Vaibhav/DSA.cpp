// //[01] DECLARATIN OF THE 2D ARRAYS.
// #include<iostream>
// using namespace std;
// int main(){
//     // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int arr[3][3] ={1,2,3,4,5,6,7,8,9};
//     //row -> 0 to 2
//     //column -> 0 to 2
//     cout<<arr[0][0];
//     return 0;
// }

// //[02] TRAVERSAL THROUGH 2D ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] ={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){//i is for rows
//         for(int j=0;j<3;j++){//j is for column
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     } 
//     return 0;
// }

//[03] TAKING INPUT FORM USER TO 2D ARRAY.
// #include <iostream>
// using namespace std;
// int main() {
//     int m;
//     cout << "ENTER THE NUMBER OF ROWS : ";
//     cin >> m;
//     int n;
//     cout << "ENTER THE NUMBER OF COLUMNS : "; // Corrected the spelling of COLUMN
//     cin >> n;
//     int arr[m][n];
//     // Taking input
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) { // Corrected the loop condition
//             cin >> arr[i][j];
//         }
//     }
//     // Print the 2D array
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) { // Corrected the loop condition
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// //[04] WAP TO STORE THE ROLL NUMBER AND MARKS OBTAINED BY 4 STUDENTS SIDE BY SIDE IN THE MATRIX.
// // //M-1:HORIZONTAL TABLE
// // #include <iostream>
// // using namespace std;
// // int main() {
// //     //roll number marks
// //     //4 student
// //     int arr[2][4];
// //     for(int i=0;i<2;i++){
// //         for(int j=0;j<4;j++){
// //             cin>>arr[i][j];
// //         }
// //     }
// //     for(int i=0;i<2;i++){
// //         for(int j=0;j<4;j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// //M-2:
// #include <iostream>
// using namespace std;
// int main() {
//     //roll number marks
//     //4 student
//     int arr[4][2];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// /*[05] WRITE A C++ PROGRAMM TO FIND THE LARGEST
// ELEMENT OF A GIVEN 2D ARRAY OF INTEGERS*/
// #include <iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int m;
//     cout<<"rows = ";
//     cin>>m;
//     int n;
//     cout<<"columns = ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int max = INT_MIN;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(max < arr[i][j]) max = arr[i][j];
//         }
//     }
//     cout<<"MAXIMUM ELEMENT OF THE ARRAY WILL BE : "<<max;
//     return 0;
// }

// //[06] WAP TO PRINT THE SUM OF THE ELEMENTOF THE 2D ARRAY.
// #include <iostream>
// using namespace std;
// int main() {
//     int m;
//     cout << "rows = ";
//     cin >> m;
//     int n;
//     cout << "columns = ";
//     cin >> n;
//     int arr[m][n];
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     int sum = 0;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             sum += arr[i][j];
//         }
//     }
//     cout<<sum;
//     return 0;
// }

// //[07] WAP TO ADD 2 MATRICES.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int res[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             res[i][j] = arr[i][j] + brr[i][j];
//         }
//     }
//     cout<<"RESULTANT MATRIX WILL BE : "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[08] WAP TO PRINT THE TRANSPOSE OF THE MATRIX ENTERED BY THE USER AND STORE IT IN A NEW MATRIX.
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][3] = {{1,2,3},{4,5,6}};
//     int T[3][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             T[j][i] = a[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<T[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// //[09] WAP TO THE CHANGE THE GIVEN MATRIX WITH ITS TRANSPOSE.
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int m = matrix.size();//rows
//         int n = matrix[0].size();//column
//         vector<vector<int>>T(n,vector<int>(m));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 T[i][j] = matrix[j][i];
//             }
//         }
//         return T;
//     }
// int main(){
//     return 0;
// }

// /*[10] YOU ARE GIVEN WITH A MATRIX / 2D ARRAY OF SIZE(N*N).
// CHANGE THIS MATRIX INTO ITS TRANSPOSE.*/
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=1+i;j<3;j++){
//             int temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp;
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

// //[11] WAP TO ROTATE THE MATRIX BY 90 DEGREES CLOCKWISE.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         //transpose
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         //reversing the transposed array
//         for(int k=0;k<n;k++){
//             int i = 0;
//             int j = n-1;
//             while(i<=j){
//                 int temp = matrix[k][i];
//                 matrix[k][i] = matrix[k][j];
//                 matrix[k][j] = temp; 
//                 i++;
//                 j--;
//             }
//         }
//         return ;
//     }
// int main(){
//     return 0;
// }
