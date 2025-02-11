// //Deepseek code :-
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     if (n <= 0) {
//         cout << "0" << endl;
//         return 0;
//     }

//     vector<int> f(n+1, 0);
//     int m; // m queries
//     cin >> m;
//     if (m <= 0) {
//         cout << "0" << endl;
//         return 0;
//     }

//     vector<int> l(n+2, 0);
//     vector<int> r(n+2, 0);

//     for (int i = 0; i < m; i++) {
//         int L, R;
//         cin >> L >> R;
//         if (L < 1 || L > n || R < 1 || R > n || L > R) {
//             cout << "Invalid range: " << L << " " << R << endl;
//             return 0;
//         }
//         l[L]++;
//         r[R]++;
//     }

//     f[1] = l[1];
//     for (int i = 2; i <= n; i++) {
//         f[i] = l[i] + f[i-1] - r[i-1];
//     }

//     int maxCoins = 0;
//     for (int i = 1; i <= n; i++) {
//         maxCoins = max(maxCoins, f[i]);
//     }

//     vector<int> c(maxCoins + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         c[f[i]]++;
//     }

//     for (int i = maxCoins - 1; i >= 0; i--) {
//         c[i] = c[i] + c[i+1];
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int num;
//         cin >> num;
//         if (num > maxCoins) {
//             cout << "0" << endl;
//         } else {
//             cout << c[num] << endl;
//         }
//     }

//     return 0;
// }


// //Approach 01:
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> f(n+1,0);
//     int m;//m queries
//     cin>>m;
//     vector<int> l(n+2,0);
//     vector<int> r(n+2,0);
//     for(int i=0;i<m;i++){
//         int L,R;
//         cin>>L>>R;
//         l[L]++;
//         r[R]++;
//     }
//     f[1] = l[1];
//     for(int i=2;i <= n;i++){
//         f[i] = l[i]+f[i-1]-r[i];
//     }
//     vector<int> c(10000005,0);
//     for(int i=0;i<=n;i++){
//         int coins = f[i];
//         c[coins]++;
//     }
//     for(int i=c.size()-2;i>=0;i--){
//         c[i] = c[i]+c[i+1];
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int num;
//         cin>>num;
//         cout<<c[num]<<endl;
//     }
//     return 0;
// }


//2nd approach :- best approach 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> f(n+10,0);
    int m;//m queries
    cin>>m;
    for(int i=0;i<m;i++){
        int L,R;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }
    for(int i=1;i<f.size();i++){
        f[i] = f[i] + f[i-1];
    }
    vector<int> c(10000005,0);
    for(int i=0;i<=n;i++){
        int coins = f[i];
        c[coins]++;
    }
    for(int i=c.size()-2;i>=0;i--){
        c[i] = c[i]+c[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<c[num]<<endl;
    }
    return 0;
}