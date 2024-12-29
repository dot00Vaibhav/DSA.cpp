#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
//Method 01: brute force
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         bool flag = false;
//         if(s==t) flag = true;
//         return flag;
//         cout<<flag;
//     }
// };


//Method 01 using maps : better
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()) return false;
//         unordered_map<char,int> map1;
//         unordered_map<char,int> map2;
//         for(int i=0;i<s.size();i++){
//             map1[s[i]]++;
//             map2[t[i]]++;
//         }
//         for(auto ele : map1){
//             char char1 = ele.first;
//             int freq1 = ele.second;
//             if(map2.find(char1)!=map2.end()){
//                 int freq2 = map2[char1];
//                 if(freq1!=freq2) return false;
//             }
//             else return false;
//         }
//         return true;
//     }
// };


//Method 03: best approach : using only one map
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(int i=0;i<s.size();i++){
            map1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            char ch = t[i];
            if(map1.find(ch)!=map1.end()){
                map1[ch]--;//decrease the frequency
                if(map1[ch]==0) map1.erase(ch);
            }
            else return false;
        }
        if(map1.size()>0) return false;
        return true;
    }
};
int main(){
    return 0;
}