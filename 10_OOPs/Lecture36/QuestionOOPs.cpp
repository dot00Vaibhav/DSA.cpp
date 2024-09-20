//Ques : creat a class "cricketer" that contains name of cricketer , his age , number of test matches that he played and
// the average runs that he has scored in each test match. create an array of data type "cricketer" to hold records of 20 such 
//cricketers and then write a program to read these records.

#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int age;
    int noOfTestMatches;
    int averageScores;
};
int main(){
    cricketer virat;
    virat.name = "Virat";
    virat.age = 36;
    virat.noOfTestMatches = 108;
    virat.averageScores = 50;

    cricketer Rohit;
    Rohit.name = "Rohit";
    Rohit.age = 37;
    Rohit.noOfTestMatches = 41;
    Rohit.averageScores = 49;

    cricketer cricketers[2] = {virat,Rohit};
    for(int i=0;i<2;i++){
        cout<<"name : "<<cricketers[i].name<<endl;
        cout<<"age : "<<cricketers[i].age<<endl;
        cout<<"No. of test matches : "<<cricketers[i].noOfTestMatches<<endl;
        cout<<"Average Scores : "<<cricketers[i].averageScores<<endl;
    }
    return 0;
}