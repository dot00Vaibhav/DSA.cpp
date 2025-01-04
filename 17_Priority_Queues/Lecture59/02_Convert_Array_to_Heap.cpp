//converting array to heap in different time complexities : (1) O(NlogN) and (2) O(N).
#include<iostream>
#include<vector>
using namespace std;
class MaxHeap{//Max Heap Class in which highest element is having highest priority.
    vector<int> hp;
    
    void upheapify(int Cin){
        while(Cin>0){
            int Pin = (Cin-1)/2;//"/" operator gives floor value. //Parent Index
            if(hp[Cin]>hp[Pin]){//Max Heap Condition //For Min Heap, change the sign of comparison
                swap(hp[Cin],hp[Pin]);
                Cin = Pin;//Now, Child Index becomes Parent Index
            }
            else break;
        }
    }

    void downheapify(int idx){
        while(idx < hp.size()){
            int lc = 2*idx + 1;
            int rc = 2*idx + 2;
            if(lc >= hp.size()) break;//idx is a leaf node, we dont have to check for rc as if lc is not present then rc will also not be present.
            int maxEl = idx;//assuming that idx is the largest element among the three.
            if(hp[lc] > hp[maxEl]){
                maxEl = lc;//if lc is greater than the root element, then maxEl will be lc's index.
            }
            if(rc < hp.size() && hp[rc] > hp[maxEl]){
                maxEl = rc;//if rc is present and greater than root element, then maxEl will be rc's index.
            }
            if(maxEl != idx){//If maxEl is not equal to idx means our assumption is wrong.
                swap(hp[idx],hp[maxEl]);//swap the root to maxElement's index.
                idx = maxEl;//now check for the that heap which is changed by swapping the maxEl.
            }
            else break;//idx is at correct position
        }
    }
    
public:

    void push(int element){
        // TC: O(logN)
        hp.push_back(element);
        upheapify(hp.size()-1);//Last element is at hp.size()-1 to we have to up percolate it.
    }
    void pop(){
        // TC: O(logN)
        //removes the highest priority element
        if(empty()) return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()) downheapify(0);//If heap is not empty, then downheapify the root element as it is not at correct position.
    }
    int peek(){
        // TC: O(1)
        if(empty()) return INT8_MIN;
        return hp[0];
    }
    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]"<<endl;
    }
    bool empty(){
        return hp.size() == 0;
    }
    void remove(int customIdx){
        hp[customIdx] = INT8_MAX;
        upheapify(customIdx);
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        downheapify(0);
    }

// //O(NlogN) approach : using upheapify
//     MaxHeap(vector<int> v){
//         hp = v;
//         for(int i=0;i<hp.size();i++){
//             upheapify(i);
//         }
//     }

//O(N) approach : using downheapify
    MaxHeap(vector<int> v){
        hp = v;//copying the vector to heap
        int n = hp.size();
        for(int i = n/2;i>=0;i--){
            downheapify(i);
        }
    }
};
int main(){
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    MaxHeap hp(v);
    hp.display();
    hp.push(100);
    hp.display();
    return 0;
}