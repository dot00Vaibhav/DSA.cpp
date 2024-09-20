//[01] koko eating bananas. [LeetCode-875]
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool check(int speed, vector<int>& piles, int h){
    int n = piles.size();
    long long count = 0;
    for(int i=0;i<n;i++){
        //if(count>h) return false;
        if(speed>=piles[i]) count++;
        else{//speed<piles[i]
            if(piles[i]%speed == 0) count += (long long)(piles[i]/speed);
            else count += (long long)(piles[i]/speed + 1);
        }
    }
    if(count>(long long)h) return false;
    else return true;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(piles[i]>max) max = piles[i];
    }
    int lo = 1;
    int hi = max;
    int ans = -1;
    int mid = 0;
    while(lo<=hi){
        mid = lo+(hi-lo)/2;
        if(check(mid,piles,h)==true){
          ans = mid;
          hi = mid - 1;  
        }else lo = mid + 1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    vector<int> piles(n);
    cout<<"Enter piles : ";
    for(int i=0;i<n;i++){
        cin>>piles[i];
    }
    int h;
    cout<<"hours = ";
    cin>>h;
    int kokospeed = minEatingSpeed(piles,h);
    cout<<"The minimum speed koko will take is "<<kokospeed<<".";
    return 0;
}