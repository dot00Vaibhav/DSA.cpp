// //[01] Charecter array :- string
// #include<iostream>
// using namespace std;
// int main(){
//     char str[5] = {'a','b','c','d','e'};
//     for(int i=0;i<5;i++){
//         cout<<str[i]<<" ";
//     }
//     cout<<endl;
//     char string[5] = "abcd";
//     for(int i=0;i<5;i++){
//         cout<<str[i]<<" ";
//     }
//     return 0;
// }

// //[02] Proofs that character array and the string is terminated with the '\0'.
// #include<iostream>
// using namespace std;
// int main(){
//     //(1)
//     char string[5] = "abcd";
//     cout<<string[4];
//     cout<<endl;
//     //(2)
//     char str[] = {'a','b','c','d','e'};
//     cout<<str[5];//at the 5th index '\0' is present
//     //(3)
//     cout<<endl;
//     char S[] = {'a','b','c','d','e','f'};
//     for(int i=0;S[i] != '\0';i++){
//         cout<<S[i]<<" ";
//     }
//     return 0;
// }

// //[03] Declaration and taking input of the string.
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "vaibhav";
//     cout<<str;
//     cout<<endl<<str[0]<<endl;;
//     string s;
//     cin>>s;//works only if the given string have no spaces
//     cout<<endl<<s;
//     return 0;
// }

// //[04] For using string with the space.
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str;
//     return 0;
// }

// //[05] INPUT A STRING OF LENGTH n AND COUNT ALL THE VOWELS IN THE GIVEN STRING.
// #include<iostream>
// using namespace std;
// int main(){
//     string s = "raghav";
//     int count = 0;
//     int i=0;
//     while(s[i] != '\0'){
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count++;
//         i++;
//     }
//     cout<<count;
//     return 0;
// }

// //[06] Upgradation of the single char in the string.
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "Vaibhav";
//     cout<<str<<endl;
//     str[2] = 'o';
//     cout<<str;
//     return 0;
// }

// /*[07] INPUT THE STRING OF SIZE n and UPDATE ALL THE EVEN POSITIONS IN THE 
// STRING TO CHARACTER 'a'. CONSIDER '0' BASED INDEXING*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     char str[n];/*The input string
//     is not guaranteed to be null-terminated, which can lead to issues*/
//     cout<<"Enter the string : \n";
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }
//     str[n] = '\0';//this is the mistake
//     cout<<str;
//     for(int i=0;i<n;i++){
//         if(i%2 == 0){
//             str[i] = 'a';
//         }
//     }
//     cout<<endl<<str;
//     return 0;
// }

//[08] BUILT-IN FUNCCTIONS :
// //(01)  <string_name>.size();
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "vaibhav tiwari";
//     cout<<str.length();
//     return 0;
// }
// //(02)  push_back() and pop_back();
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "vaibhavT";
//     cout<<str<<endl;
//     str.pop_back();
//     cout<<str<<endl;
//     str.push_back('T');
//     cout<<str;
//     return 0;
// }
// //(03)  "+" operator : concatinate the string
// #include<iostream>
// using namespace std;
// int main(){
//     string v = "vaibhav";
//     string t = " tiwari";
//     cout<<v<<" "<<t<<endl;
//     v = v + t;
//     cout<<v;
//     return 0;
// }
// //(04)  reverse();
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str = "vaibhav";
//     reverse(str.begin(),str.end());
//     cout<<"Full reversed string will be : "<<str;
//     reverse(str.begin()+3,str.begin()+6);
//     cout<<endl<<"reversed string from index 3 to 5 : "<<str;
//     return 0;
// }
// //(05)  substr();
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "abcdef";
//     //s.substr(idx,len) : provide next elements from idx to the idx+len-1 element tak
//     cout<<s.substr(1,2);//bc
//     return 0;
// }
// //(06)  to_string(); :- it convert integer to the string
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int x = 12345;
//     string s = to_string(x);
//     cout<<s;//number is converted to the string
//     return 0;
// }

// //[09] Input a string of the even length and reverse the first half of the string
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int len = str.size();
//     reverse(str.begin(),str.begin()+len/2);
//     cout<<str;
//     return 0;
// }

// /*[10] INPUT THE STRING OF THE EVEN LENGTH AND RETURN THE SECOND HALF
// OF THAT STRING USING INBUILT substr function*/
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
//     int len = str.length();
//     cout<<str.substr(len/2);
//     return 0;
// }

// //[11] RETURN THE TOTAL NUMBER OF THE DIGITS IN A NUMBER WITHOUT USING A LOOP.
// /*try using inbuilt to_string() function*/
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n = 1234;
//     string str = to_string(n);
//     cout<<"Total number of the digit will be : "<<str.length();
//     return 0;
// }