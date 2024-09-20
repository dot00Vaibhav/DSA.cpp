#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[1]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Using stack : pop , ans and push and forward traverse in array
    // SC = O(n) & TC = O(n)

    int pgi[n]; //previous greatest element index array
    stack<int> st;
    pgi[0] = 1;
    st.push(0);

    for(int i=1;i<n;i++){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
        // mark the ans in the pgi array
        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();
        pgi[i] = i - pgi[i];
        //push the arr[i]
        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    return 0;
}