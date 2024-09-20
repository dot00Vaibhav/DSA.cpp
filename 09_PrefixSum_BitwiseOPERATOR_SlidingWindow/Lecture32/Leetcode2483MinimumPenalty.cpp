// 2483. Minimum Penalty for a Shop
#include<iostream>
#include<string>
using namespace std;
int bestClosingTime(string customers) {
    int n = customers.size();
    int pre[n+1];//number of N before the kth hour
    int suf[n+1];//no of Y after and including kth hour
    pre[0]=0;
    for(int i=0;i<n;i++){
        // int count=0;
        // if(customers[i]=='N') count++;
        // pre[i+1]=pre[i]+count;
        pre[i+1]=pre[i]+((customers[i]=='N') ? 1 : 0);
    }
    suf[n]=0;
    for(int i=n-1;i>=0;i--){
        suf[i]=suf[i+1]+((customers[i]=='Y') ? 1 : 0);
    }
    int minPen=n;
    for(int i=0;i<=n;i++){
        pre[i]=pre[i]+suf[i];
        int pen=pre[i];
        minPen=min(minPen,pen);
    }
    for(int i=0;i<=n;i++){
        int pen=pre[i];
        if(pen==minPen) return i;
    }
    return n;
}
int main(){
    return 0;
}