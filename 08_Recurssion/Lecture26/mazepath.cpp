//Maze Path - we have to find number of ways to reach destination "D"
//ec-ending column er-ending rows sr-starting column 
#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalways = rightways+downways;
    return totalways;
}
int  maze2(int er,int ec){
    if(er==1 && ec==1) return 1;
    if(er<1 || ec<1) return 0;
    int downways = maze2(er-1,ec);
    int rightways = maze2(er,ec-1);
    return downways+rightways;
}
void printpath2(int er,int ec,string s){
    if(er<1 || ec<1) return;
    if(er==1 && ec==1){//Destination reached
        cout<<s<<endl;
        return;
    }
    printpath2(er,ec,s+"R");//Right
    printpath2(er,ec,s+"D");//Down
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){//Destination reached
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+"R");//Right
    printpath(sr+1,sc,er,ec,s+"D");//Down
}
int main(){
    cout<<maze2(2,3)<<endl;
    cout<<"Ways using printpath2 and maze2 : \n";
    printpath2(2,3,"");
    cout<<maze(0,0,1,2);
    cout<<"Ways using printpath and maze : \n";
    printpath(0,0,1,2,"");
    return 0;
}//there is printing problem in the code.