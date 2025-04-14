#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    Node* left;// 0 position
    Node* right;// 1 position
    Node(){
        this->left = this->right = NULL;
    }
};
class Solution {
public:
    //compares incoming value with existing inserted data in trie
    int maxXorPair(Node* head, int value){
        int curr_xor = 0;
        Node* curr = head;
        for(int i = 31; i >= 0; i--){
            int bit = (value >> i) & 1;
            if(bit == 0){
                //we are looking for 1 means right
                if(curr->right != NULL){
                    curr = curr->right;//move to that node
                    curr_xor += (1 << i);//add in power 2 at the current position
                }else{
                    curr = curr->left;//is not 1 then we will simply move right
                }
            }else{//bit == 1
                if(curr->left != NULL){
                    //we are looking for 0 (left)
                    curr = curr->left;
                    curr_xor += (1 << i);
                }else{
                    curr = curr->right;
                }
            }
        }
        return curr_xor;
    }

    void insert(Node* head, int value){
        Node* curr = head;
        for(int i = 31; i >= 0; i--){
            int bit = (value >> i) & 1;
            if(bit == 0){
                if(curr->left == NULL){
                    curr->left = new Node();
                }
                curr = curr->left;
            }else{
                if(curr->right == NULL){
                    curr->right = new Node();
                }
                curr = curr->right;
            }
        }
    }
    int findMaximumXOR(vector<int>& nums) {
        Node* head = new Node();
        insert(head, nums[0]);
        int ans = 0;
        for(int i = 1; i < nums.size(); i++){
            ans = max(ans , maxXorPair(head, nums[i]));
            insert(head, nums[i]);
        }
        return ans;
    }
};


int main(){
    return 0;
}