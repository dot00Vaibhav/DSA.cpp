// /*[WARMUP QUESTION] Input a string and return the number of times the
// neighbouring characters are different from each other*/
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string : \n";
//     getline(cin,str);
//     int count = 0;
//     int n = str.size();
//     for(int i=0;i<n;i++){
//         if(n==1) break;
//         if(n==2 && str[1] != str[0]){
//              count = 1;
//              break;
//         }
//         if(i == 0){
//             if(str[i] != str[i+1]) count++;
//         }
//         else if(i==n-1){
//             if(str[i] != str[i-1]) count++;
//         }
//         else if(str[i] != str[i-1] && str[i+1] != str[i]) count++;
//     }
//     cout<<count;
//     return 0;
// }

// //[01] Sorting a string using in-built function.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     sort(str.begin(),str.end());
//     cout<<str;
//     return 0;
// }

// //[02] Given two strings s and t, return true if t is anagram of s and false otherwise.
// //Leetcode : 242
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "physicswallah";
//     sort(s.begin(),s.end());
//     string t = "wallahphysics";
//     sort(t.begin(),t.end());
//     bool flag = false;
//     if(s==t) flag = true;
//     cout<<flag;
//     return 0;
// }

// /*[03] Given a string consisting of lowercase english alphabets.
// Print the characters that is occurring most number of times*/
// // //M - 1 :
// // #include<iostream>
// // #include<string>
// // using namespace std;
// // int main(){
// //     string s = "vaibhav";
// //     //2
// //     int max = 0;
// //     for(int i=0;i<s.length();i++){
// //         char ch = s[i];
// //         int count = 1;
// //         for(int j=i+1;j<s.length();j++){
// //             if(s[i] == s[j]) count++;
// //         }
// //         if(max<count) max = count;
// //     }
// //     for(int i=0;i<s.length();i++){
// //         char ch = s[i];
// //         int count = 1;
// //         for(int j=i+1;j<s.length();j++){
// //             if(s[i] == s[j]) count++;
// //         }
// //         if(max == count){
// //             cout<<ch<<" "<<count<<endl;
// //         }
// //     }
// //     return 0;
// // }
// //M - 2 : constant extra space
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string s = "leetcode";
//     vector<int>v(26,0);
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         int ascii = (int)ch;
//         v[ascii - 97]++;
//     }
//     int max = 0;
//     for(int i=0;i<26;i++){
//         if(v[i] > max) max = v[i];
//     }
//     for(int i=0;i<26;i++){
//         if(v[i] == max){
//             int ascii = i + 97;
//             char ch = (char)ascii;
//             cout<<ch<<" "<<max<<endl;
//         }
//     }
//     return 0;
// }

// //[04] Given a sntence,split every single word of the sentence and print in a new line.
// #include<iostream>
// #include<sstream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "raghav is   a maths teacher";
//     stringstream ss(str);
//     string temp;
//     while(ss>>temp){
//         cout<<temp<<endl;
//     }
//     return 0;
// }

// //[05] Given a sentence 'str',return the word that is occuring most number of times in that sentence.
// #include<iostream>
// #include<string>
// #include<sstream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str = "Raghav is a maths teacher. He is a DSA mentor as well";
//     stringstream t(str);
//     string temp;
//     vector<string>v;
//     while(t>>temp){
//         v.push_back(temp);
//     }
//     sort(v.begin(),v.end());
//     int n = v.size();
//     int maxcount = 1;
//     int count = 1;
//     for(int i=1;i<n;i++){
//         if(v[i] == v[i-1]) count++;
//         else count = 1;
//         maxcount = max(maxcount,count);
//     }
//     count = 1;
//     for(int i=1;i<n;i++){
//         if(v[i] == v[i-1]) count++;
//         else count = 1;
//         if(maxcount == count){
//             cout<<v[i]<<" "<<count<<endl;
//         }
//     }
//     return 0;
// }

// //[06] stoi :- string to integer and stoll :- string to long long BUILT-IN FUNCTION.
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "123456";
//     int y = stoi(s);
//     cout<<y-1<<endl;
//     string str = "123456789999999999";
//     long long x = stoll(str);
//     cout<<x+1;
//     return 0;
// }

// //[07] Given n strings consisting of digits from 0 to 9. Return the index of string which has maximum value.(take 0 based indexing)
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     string arr[n];
//     cout<<"Elements of the string : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = stoi(arr[0]);
//     string maxS = arr[0];
//     for(int i=1;i<n;i++){
//         int x = stoi(arr[i]);
//         if(x > max){
//             max = x;
//             maxS = arr[i];
//         }
//     }
//     cout<<"Maximum value of the given string : "<<max;
//     return 0;
// }