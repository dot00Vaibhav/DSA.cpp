#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class MyCircularQueue {
public:
    int f; // front
    int b; // back or rear
    int s; // curr size
    int c; // capacity
    vector<int> arr;
    MyCircularQueue(int k) { // k is capacity
        f = 0;
        b = 0;
        s = 0;
        c = k;
        vector<int> v(k);
        arr = v;
    }
    
    bool enQueue(int val) { //push back
        if(s==c) return false;
        arr[b] = val;
        b++;
        if(b==c) b = 0;
        s++;
        return true;
    }
    
    bool deQueue() { //pop front
        if(s == 0) return false;
        f++;
        if(f==c) f = 0;
        s--;
        return true;
    }
    
    int Front() {
        if(s == 0) return -1;
        return arr[f];
    }
    
    int Rear() { // back
        if(s == 0) return -1;
        if(b==0) return arr[c-1];
        return arr[b-1];
    }
    
    bool isEmpty() { //empty
        if(s==0) return true;
        else return false;
    }
    
    bool isFull() { // s == k
        if(s==c) return true;
        else return false;
    }
};
int main(){
    
    return 0;
}