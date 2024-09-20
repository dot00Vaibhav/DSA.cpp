// //[01] passing and returning class objects to function
// #include<iostream>
// using namespace std;
// class player{
// private:
//     int health;
//     int age;
//     int score;
//     bool alive;
//     Gun gun;
//     class helmet{
//         int hp;
//         int level;
//     public:
//         void setHp(int hp){
//             this->hp = hp;
//         }
//         void setLevel(int level){
//             this->level = level;
//         }
//         int getHp(){
//             return hp;
//         }
//         int getLevel(){
//             return level;
//         }
//     };
// public:
//     //getter
//     int getHealth(){
//         return health;
//     }
//     int getAge(){
//         return age;
//     }
//     int getScore(){
//         return score;
//     }
//     int isAlive(){
//         return alive;
//     }
//     Gun geGun(){
//         return gun;
//     }
//     //setter
//     void setHealth(int health){
//         this->health = health;
//     }
//     void setAge(int age){
//         this->age = age;
//     }
//     void setScore(int score){
//         this->score = score;
//     }
//     void setisAlive(bool){
//         this->alive = alive;
//     }
//     void setGun(Gun gun){
//         this->gun = gun;
//     }
//     void setHelmet(int level){
//         helmet *Helmet = new helmet;
//         helmet->setLevel(level);
//         int health;
//         if(level == 1)
//     }
// };
// int addScore(player a,player b){
//     return a.getScore() + b.getScore();
// }

// player maxScorePlayer(player a,player b){
//     if(a.getScore() > b.getScore()){
//         return a;
//     }else return b;
// }
// int main(){
//     player harsh;//object creatiion , statically.
//     player raghav;//compile time , static allocation

//     player *urvi = new player;//run time , dynamic allocation
//     // player urviObject = *urvi;

//     Gun akm;
//     akm.ammo(100);
//     akm.damage(50);
//     akm.scope(2);

//     harsh.setAge(21);
//     harsh.setScore(100);
//     harsh.setisAlive(true);
//     harsh.setHealth(70);
//     harsh.setGun(akm)

//     Gun awm;
//     awm.ammo(15);
//     awm.damage(150);
//     awm.scope(8);

//     raghav.setAge(22);
//     raghav.setScore(20);
//     raghav.setisAlive(true);
//     raghav.setHealth(100);
//     raghav.setGun(awm);

//     urvi->setScore(99);
//     cout<<"*urvi : "<<urvi->getScore()<<endl;

//     // urviObject.setAge(90);
//     // cout<<"UrviObject : "<<urviObject.getAge()<<endl;

//     // cout<<addScore(harsh,raghav)<<endl;
//     // player sanket = maxScorePlayer(harsh,raghav);
//     // cout<<sanket.getScore()<<endl;
//     // cout<<sanket.getHealth()<<endl;
//     return 0;
// }



//[02] class inside class - nested class => using 2 methods
// #include<iostream>
// using namespace std;
// class Gun{
// public:
//     int ammo;
//     int damage;
//     int scope;
// };
// class player{
// private:
//     Gun gun;//1st
//     class helmet{//2nd
//         int hp;
//         int level;
//     public:
//         void setHp(int hp){
//             this->hp = hp;
//         }
//         void setLevel(int level){
//             this->level = level;
//         }
//         int getHp(){
//             return hp;
//         }
//         int getLevel(){
//             return level;
//         }
//     };
//     helmet *Helmet = new helmet;
// public:
//     //getter
//     Gun getGun(){
//         return gun;
//     }
//     //setter
//     void setGun(Gun gun){
//         this->gun = gun;
//     }
//     void setHelmet(int level){
//         Helmet->setLevel(level);
//         int health;
//         if(level == 1)
//             health = 25;
//         else if(level == 2)
//             health = 50;
//         else if(level == 3)
//             health = 100;
//         else{
//             cout<<"error, invalid level!!!";
//             return;//exit the function if level is invalid
//         }
//         Helmet->setHp(health);
//     }
//     void getHelmet(){
//         cout<<"Helmet->getHp() : "<<Helmet->getHp()<<endl;
//         cout<<"Helmet->getLevel() : "<<Helmet->getLevel()<<endl;
//     }
// };
// int main(){
//     player raghav;
//     player harsh;

//     Gun akm;
//     akm.ammo = 100;
//     akm.damage = 50;
//     akm.scope = 2;

//     harsh.setGun(akm);
//     harsh.setHelmet(2);

//     Gun awm;
//     akm.ammo = 15;
//     akm.damage = 150;
//     akm.scope = 8;

//     raghav.setGun(awm);
//     raghav.setHelmet(3);


//     Gun gun123 = harsh.getGun();
//     cout<<"gun123.damage : "<<gun123.damage<<endl;
//     cout<<"gun123.ammo : "<<gun123.ammo<<endl;
//     cout<<"gun123.scope : "<<gun123.scope<<endl;

//     harsh.getHelmet();
//     cout<<endl;
//     raghav.getHelmet();
    
//     return 0;
// }



//[03] array of classes or say objects
#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int damage;
    int scope;
};
class player{
private:
    Gun gun;//1st
    class helmet{//2nd
        int hp;
        int level;
    public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    helmet *Helmet = new helmet;
public:
    //getter
    Gun getGun(){
        return gun;
    }
    //setter
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setHelmet(int level){
        Helmet->setLevel(level);
        int health;
        if(level == 1)
            health = 25;
        else if(level == 2)
            health = 50;
        else if(level == 3)
            health = 100;
        else{
            cout<<"error, invalid level!!!"<<endl;
            return;//exit the function if level is invalid
        }
        Helmet->setHp(health);
    }
    void getHelmet(){
        cout<<"Health : "<<Helmet->getHp()<<endl;
        cout<<"Level : "<<Helmet->getLevel()<<endl;
    }
};
int main(){
    player raghav;
    raghav.setHelmet(3);
    
    player harsh;
    harsh.setHelmet(1);

    player urvi;
    urvi.setHelmet(4);

    player players[3] = {harsh,raghav,urvi};
    players[0].getHelmet();
    return 0;
}