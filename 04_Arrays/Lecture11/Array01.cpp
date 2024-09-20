// //[01] SYNTAX AND DECLARATION AND INITIALISATION(in worst) :
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]; //declartion 
//     arr[0] = 3; //initialisation
//     cout<<arr[0];
//     return 0;
// }

// //[02] INITIALISATION AND INPUTTING AND PRINTING:
// //INITIALISATION IN ANOTHER WAY :
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7] = {2,3,5,17,34,4,8};
//     cout<<arr[1];
//     return 0;
// }
// //PRINTING ALL ELEMENTS OF ARRAY USING FOR LOOP :
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     for(int i = 0;i <= 7;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// // //INPUTTING ELEMENTS OF ARRAY USING FOR LOOP :
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7];
//     cout<<"Enter all the elements of array :"<<endl;
//     for(int i = 0; i <= 6; i++){
//         cin>>arr[i];
//     }
//     return 0;
// }

// /*[03] GIVEN THE MARKS OF STUDENTS, IF THE MARKS OF ANY STUDENT IS LESS THAN 35 PRINT ITS ROLL NUMBER.
// [ROLL NUMBER HERE REFERS TO THE INDEX OF THE ARRAY.]*/
// #include<iostream>
// using namespace std;
// int main(){
//     int studentmarks[6];
//     cout<<"Enter the marks : "<<endl;
//     for(int i = 0; i <= 5; i++){
//         cin>>studentmarks[i];
//     }
//     for(int i = 0 ; i <= 5 ; i++){
//         if(studentmarks[i] < 35){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// //[04] FINDING THE SIZE OF THE ARRAY :
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<n;
//     return 0;
// }

// //[05] CALCULATE THE SUM OF ALL THE ELEMENTS OF AN ARRAY.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the elements :"<<endl;
//     for(int i = 0; i <= 4; i++){
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for(int i = 0; i <= 4; i++){
//         sum = sum + arr[i];  //sum += arr[i];
//     }
//     cout<<"Sum of the elements of the array : "<<sum;
//     return 0;
// }


//                       /*LINEAR SEARCH*/
// //[06] FIND THE ELEMENTS X IN THE ARRAY.TAKE THE ARRAY "arr" AND X AS THE INPUT.
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"size = ";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the elements of the array : "<<endl;
//     for(int i = 0; i <= size-1; i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH : ";
//     cin>>x;
//     bool flag = false; //false -> not present
//     for(int i = 0; i <= size-1; i++){
//         if(arr[i] == x){
//             flag = true;
//         }
//     }
//     if(flag == true) cout<<"ELEMENT IS PRESENT";
//     else cout<<"ELEMENT IS NOT PRESENT";
//     return 0;
// }

// //[07] FIND THE MAXIMUM VALUE OUT OF ALL THE ELEMENTS IN THE ARRAY.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"ENTER THE ELEMENTS OF ARRAY :"<<endl;
//     for(int i = 0; i <= n-1; i++){
//         cin>>arr[i];
//     }
//     int maxx = arr[0]; //max = INT_MIN -> for this we have to include => climits
//     for(int i = 1; i <= n-1; i++){
//         if(maxx < arr[i]) maxx = arr[i];
//     }
//     cout<<"MAXIMUM NUMBER IN THE ARRAY IS "<<maxx;
//     return 0;
// }

// //[08] FIND THE SECOND LARGEST ELEMENTIN THE GIVEN ARRAY.
// //M - 1 :using two loops
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"ENTER THE ELEMENTS OF ARRAY : "<<endl;
//     for(int i = 0; i <= n-1; i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN; // max = arr[0]
//     for(int i = 0; i <= n-1; i++){
//         if( max < arr[i]) max = arr[i];
//     }
//     int smax = INT_MIN;
//     for(int i = 0; i <= n-1; i++){
//         if(smax < arr[i] && arr[i] != max){
//             smax = arr[i];
//         }
//     }
//     cout<<"SECOND LARGEST NUMBER IN THE ARRAY WILL BE "<<smax;
//     return 0;
// }
// //M - 2 : IN ONE PASS
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"ENTER THE ELEMENTS OF ARRAY : "<<endl;
//     for(int i = 0; i <= n-1; i++){
//         cin>>arr[i];
//     }
//     int max1 = INT_MIN; // max = arr[0]
//     int max2 = INT_MIN;
//     for(int i = 0; i <= n-1; i++){
//         if(max1 < arr[i]){
//             max2 = max1;
//             max1 = arr[i];
//         }else if(max2 < arr[i] && max1 != arr[i]){
//             max2 = arr[i];
//         }
//     }
//     cout<<"SECOND LARGEST NUMBER IN THE ARRAY WILL BE "<<max2;
//     return 0;
// }

// //[09] COUNT THE NUMBER OF ELEMENTS IN GIVEN ARRAY GREATER THAN A GIVEN NUMBER X.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     int arr[n];
//     cout<<"ENTER THE ELEMENTS OF ARRAY : "<<endl;
//     for(int i = 0; i <= n-1; i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"X = ";
//     cin>>x;
//     int count = 0;
//     for(int i = 0; i <= n-1; i++){
//         if(x < arr[i]){
//             count++;
//         }
//     }
//     cout<<"THE NUMBER OF ELEMENTS IN GIVEN ARRAY GREATER THEN X ARE "<<count;
//     return 0;
// }
