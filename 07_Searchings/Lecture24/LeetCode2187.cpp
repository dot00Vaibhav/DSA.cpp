//[01] minimum time to complete trips.     [LeetCode-2187]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check(long long mid, vector<int>& time, int totalTrips){
        long long trips = 0;
        int n = time.size();
        //1 2 3   midhours = 2
        for(int i=0;i<n;i++){
            trips += mid/(long long)time[i];
        }
        if(trips<(long long)totalTrips) return false;
        else return true;
    }
long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        int mx = -1;
        for(int i=0;i<n;i++){
            mx = max(mx,time[i]);
        }
        long long lo = 1;
        long long hi = (long long)mx*(long long)totalTrips;
        long long ans = -1;
        while(lo<=hi){
            long long mid = lo+(hi-lo)/2;
            if(check(mid,time,totalTrips)==true){
                ans = mid;
                hi = mid-1;
            }else lo = mid + 1;
        }
        return ans;
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<"time array of the buses in hrs : ";
    vector<int> time(n);
    for(int i=0;i<n;i++){
        cin>>time[i];
    }
    int totalTrips;
    cout<<"totalTrips = ";
    cin>>totalTrips;
    long long ans = minimumTime(time,totalTrips);
    cout<<"minimum time to complete "<<totalTrips<<" trips will be "<<ans<<"hrs."; 
    return 0;
}