#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    int arr[] = {9,6,1,19,3,2,8,12,5};
    priority_queue<int> maxhp;//default max heap : comparator function is less<int> and container is vector<int> for default
    priority_queue< int ,vector<int> ,greater<int> > hp;//min heap
    priority_queue< int ,vector<int> ,greater<int> > minhpvector(v.begin(),v.end());//vector is passed as container and converted to min heap
    priority_queue<int> maxhparray(arr,arr+9);//array is passed as container and converted to max heap
    hp.push(3);
    hp.push(4);
    hp.push(110);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);

    cout<<hp.top()<<endl;
    cout<<minhpvector.top()<<endl;
    cout<<maxhparray.top()<<endl;
    return 0;
}