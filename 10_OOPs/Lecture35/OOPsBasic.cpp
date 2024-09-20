// OOPs basics :
// //[01]
// #include<iostream>
// using namespace std;
// class student{
//     char name[20];
//     int rollNo;
//     int age;
//     int mobNo;
//     char address[50];
// };
// class player{
//     public:
//     int score;//data members 
//     string name;
//     private:
//     int health;
// };
// int main(){
//     int score[100] = {};
//     int health[100] = {};
//     student naman;//intialising the objects in class.
//     //here naman is object in the class.
//     player amit;
//     amit.score = 90; //class can be accessed  using "." dot operator
//     // amit.health = 100;
//     player player[10];
//     player[0].name = "Vaibhav";
//     amit.name = "Vaibhav";
//     cout<<amit.score<<endl;
//     // cout<<amit.health<<endl;
//     cout<<amit.name<<endl;
//     cout<<player[0].name<<endl;
//     return 0;
// }

//[02] Classes basics : 
#include<iostream>
using namespace std;
// class player{ //bad practice
//     public:
//     int score;//data members
//     string name;
//     int health;
//     void showHealth(){//member function
//         cout<<"Health is : "<<health;
//     }
//     void showScore(){
//         cout<<endl<<"Score is : "<<score;
//     }
// };
class player{
    private:
    int health;
    int score;
    public:
        //setter
    void setScore(int s){
        score = s;
    }
    void sethealth(int h){
        health = h;
    }
        //getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
    int score[100] = {};
    int health[100] = {};
    // player amit;
    // amit.score = 90;//bad practice
    // amit.health = 100;

    // amit.showHealth();
    // amit.showScore();
    player vaibhav;
    vaibhav.setScore(90);
    cout<<vaibhav.getScore();

    return 0;
}