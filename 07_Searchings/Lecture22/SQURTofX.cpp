// //Sqrt(x) : LeetCode - 69
// //M-1 : using linear search
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         if(i*i == n) cout<<"Sqrt of "<<n<<" is "<<i;
//     }
//     return 0;
// }
//M-2 : using binary search algorithm
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid*mid == n){
            flag = true;
            cout<<"Sqrt of "<<n<<" is "<<mid;
            break;
        }else if(mid*mid>n) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == false) cout<<"Sqrt of "<<n<<" is "<<hi;
    return 0;
}