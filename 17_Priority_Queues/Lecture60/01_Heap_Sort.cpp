//applying heap sort on an array using heap inplace of linear search in the selection sort.
#include<iostream>
#include<vector>
using namespace std;
class MaxHeap{//Max Heap Class in which highest element is having highest priority.
    vector<int> hp;
    int i;//[0,i] maxHeap
    
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

    void downheapify(int idx, int bound){//bound is the last index upto which we have to downheapify or upto which we have to consider the heap.
        while(idx < hp.size()){
            int lc = 2*idx + 1;
            int rc = 2*idx + 2;
            if(lc >= bound) break;//idx is a leaf node, we dont have to check for rc as if lc is not present then rc will also not be present.
            int maxEl = idx;//assuming that idx is the largest element among the three.
            if(hp[lc] > hp[maxEl]){
                maxEl = lc;//if lc is greater than the root element, then maxEl will be lc's index.
            }
            if(rc < bound && hp[rc] > hp[maxEl]){
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
        // hp.pop_back();
        i--;//As we are not removing last element so we have to decrease the value of i to rearrange the heap.
        if(!empty()) downheapify(0,i);//If heap is not empty, then downheapify the root element as it is not at correct position.
    }
    int peek(){
        // TC: O(1)
        if(empty()) return INT8_MIN;
        return hp[0];
    }
    void display(){
        cout<<"[";
        for(int j=0;j<i;j++){
            cout<<hp[j]<<" ";
        }
        cout<<"]"<<endl;
    }
    bool empty(){
        return hp.size() == 0;
    }
    void remove(int customIdx){
        hp[customIdx] = INT8_MAX;//change the value of hp[customIdx] to INT8_MAX
        upheapify(customIdx);//as the max element is in between the node, so we have to upheapify it for the max element to reach the root.
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        downheapify(0,i);//after swapping the last index element is at the top so we have to downheapify it.
    }

//Heap implementation :- O(N) approach : using downheapify
    MaxHeap(vector<int> v){
        hp = v;//copying the vector to heap
        int n = hp.size();
        i = n;
        for(int j = n/2;j>=0;j--){
            downheapify(j, i);
        }
    }


    //heap sort using max heap
    vector<int> heapsort(){
        int sz = hp.size();
        while(sz > 0){
            swap(hp[0],hp[i-1]);
            i--;
            sz--;
            downheapify(0,i);
        }
        return hp;
    }


};

void heapsort(vector<int>& v){
    MaxHeap hp(v);
    v = hp.heapsort();
}

int main(){
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    heapsort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}