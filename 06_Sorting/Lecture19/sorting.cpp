// //[01] In-built sorting technique :
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }

//     sort(v.begin(),v.end());  //  O(nlogn)

//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// //[02] Given an array , find if it sorted or not
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     bool flag = true;//assume array to be sorted
//     for(int i=0;i<5;i++){
//         if(arr[i] > arr[i+1]){
//             flag = false;
//             break;
//         }
//     }
//     if(flag == true) cout<<"array is sorte!!";
//     else cout<<"array is not sorted!!!";
//     return 0;
// }

// //[03] Sort a string in decreasing order of values associated after
// //removal of values smaller than X.
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "AZYZXBDJKX";
//     string str;
//     for(int i=0;i<s.size();i++){
//         if(s[i] >= 'X') str.push_back(s[i]);
//     }
//     cout<<str<<endl;
//     for(int i=0;i<str.size()-1;i++){
//         bool flag = true;
//         for(int j=0;j<str.size()-1-i;j++){
//             if(str[j] > str[j+1]){
//                 swap(str[j],str[j+1]);
//                 flag = false;
//             }
//         }
//         if(flag == true) break;
//     }
//     reverse(str.begin(),str.end());
//     cout<<"Sorted string in decreasing order "<<str;
//     return 0;
// }

//[04] push zeros to end while maintaining the relative order of other elemenets.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}