// 881. Boats to Save People
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        /**
        TC: O(nlogn)
        SC: O(sorting algorithm)
         */
        sort(people.begin(),people.end());
        int i = 0;
        int j = people.size()-1;
        int Boats = 0;
        while(i<=j){
            if(people[i]+people[j] <= limit){
                Boats++;//allocate the boat to the pair
                i++;
            }
            else{//if(people[i]+people[j] > limit){
                Boats++;//allocate the boat to heaviest
            }
            j--;
        }
        return Boats;
    }
};
int main(){
    return 0;
}