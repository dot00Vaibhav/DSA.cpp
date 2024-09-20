//[01] SORT THE ARRAYS OF 0's and 1's.
// //M - 1 : Two pass method //total time taken is 2n.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>a;
//     int n;
//     cout<<"ENTER THE ARRAY SIZE : ";
//     cin>>n;

//     cout<<"Enter the elements of Array : ";
//     for(int i = 0;i < n;i++){
//         int p;
//         cin>>p;
//         a.push_back(p);
//     }
//     int noz = 0;//number of zeros
//     int no1 = 0;//number of ones
//     for(int i = 0;i < n;i++){
//         if(a[i] == 0){
//             noz++;
//         }
//         if(a[i] == 1){
//             no1++;
//         }
//     }
//     for(int i = 0;i < n;i++){
//         if(i < noz) a[i] = 0;
//         else a[i] = 1;
//     }
//     cout<<"SORTED ELEMENT OF THE ARRAY : ";
//     for(int i = 0;i < n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
//M - 2 : TWO POINTERS . -> two variable
#include<iostream>
#include<vector>
using namespace std;
void swap01(vector<int>&v,int i,int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    return;
}
int main(){
    vector<int>v;
    int n;
    cout<<"ENTER THE ARRAY SIZE : ";
    cin>>n;

    cout<<"Enter the elements of Array : ";
    for(int i = 0;i < n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int i = 0;
    int j = n-1;
    while(i < j){
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
        if(i > j) break;//there are many more methods.
        if(v[i] == 1 && v[j] == 0){ 
            swap01(v,i,j);
            i++;
            j--;
        }
    }
    cout<<"SORTED ELEMENT OF THE ARRAY : ";
    for(int i = 0;i < n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}