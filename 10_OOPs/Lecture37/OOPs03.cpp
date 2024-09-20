// //[01] Constructor starting
// #include<iostream>
// using namespace std;
// class Bike{
// public:
//     int tyreSize;
// }
// int main(){
//     Bike tvs;//object creation //constructor ko call jayegi
//     return 0;
// }

// //[02] Types of constructor and the making of constructor and destructor example
// #include<iostream>
// using namespace std;
// class Bike{
// public:
//     int tyreSize;
//     int engineSize;
//     // //default constructor
//     // Bike(){
//     //     cout<<"constructor call hua!!"<<endl;
//     // }

//     //used for the initialisation of the data members
//     Bike(int tyreSize,int engineSize){
//         this->tyreSize = tyreSize;
//         this->engineSize = engineSize;
//     }

//     ~Bike(){
//         cout<<"destructor call hua"<<endl;
//     }
// };
// int main(){
//     Bike tvs(12,100);
//     cout<<"tvs tyre size : "<<tvs.tyreSize<<" & "<<" engine size : "<<tvs.engineSize<<endl;
//     Bike honda(13,150);
//     cout<<"honda tyre size : "<<honda.tyreSize<<" & "<<" engine size : "<<honda.engineSize<<endl;
//     bool flag = true;
//     if(flag==true){
//         Bike bmw(17,1000);
//         cout<<"bmw tyre size : "<<bmw.tyreSize<<" & "<<" engine size : "<<bmw.engineSize<<endl;
//     }
//     Bike royalEnfield(15,350);
//     cout<<"royal enfield tyre size : "<<royalEnfield.tyreSize<<" & "<<" engine size : "<<royalEnfield.engineSize<<endl;
//     return 0;
// }

// //[03] static member : use of static keyword
// #include<iostream>
// using namespace std;
// class Bike{
// public:
//     static int noOfBikes;//this belongs to class
//     int tyreSize;
//     Bike(int tyreSize){//constructor
//         this->tyreSize = tyreSize;
//     }
//     static void increaseNoOfBikes(){
//         noOfBikes++;
//     }
// };
// int Bike::noOfBikes = 10;

// void print(){
//     static int b = 10;
//     cout<<b<<endl;
//     b++;
// }
// int main(){
//     // print();
//     // print();
//     // print();

//     Bike royalEnfield(15);
//     Bike bajaj(15);
    
//     royalEnfield.increaseNoOfBikes();
//     cout<<bajaj.noOfBikes<<endl;
//     cout<<royalEnfield.noOfBikes<<endl;
    
//     bajaj.increaseNoOfBikes();
//     cout<<bajaj.noOfBikes<<endl;
//     cout<<royalEnfield.noOfBikes<<endl;

//     Bike::increaseNoOfBikes();
//     cout<<bajaj.noOfBikes<<endl;
//     cout<<royalEnfield.noOfBikes<<endl;

//     return 0;
// }


// //[04] Initialisation list.
// #include<iostream>
// using namespace std;
// class Bike{
// public:
//     int tyreSize;
//     int engineSize;
//     Bike (int tS,int eS = 200) : tyreSize(tS), engineSize(eS){
//     }
// };
// int main(){
//     Bike royalEnfield(15,350);
//     Bike bajaj(13);

//     cout<<royalEnfield.engineSize<<endl;
//     cout<<bajaj.engineSize<<endl;
//     cout<<royalEnfield.tyreSize<<endl;
//     cout<<bajaj.tyreSize<<endl;
//     return 0;
// }


// //Polymorphism - compile time polymorphism - Function/constructor overloading
// #include<iostream>
// using namespace std;
// class Bike{
// public:
//     int tyreSize;
//     int engineSize;


//     //constructor overloading
//     Bike(int tS,int eS) : tyreSize(tS),engineSize(eS) {}
//     Bike(int tS) : tyreSize(tS),engineSize(100) {}
//     Bike() : tyreSize(12),engineSize(100) {}
// };

// //function overloading
// void add(int a,int b){
//     cout<<a+b<<endl;
// }
// void add(int a){
//     cout<<10+a<<endl;
// }
// int main(){
//     add(1,2);
//     add(5);
//     return 0;
// }


// //[05] Inheritance
// #include<iostream>
// #include<string>
// using namespace std;
// class vehical{//base class or parent class
// public:
//     int tyreSize;
//     int engineSize;
//     int lights;
//     string companyName;
// };
// class car : public vehical{//car inherits vehical or can say car is a child of vehical
// public:
//     int steeringSize;
// };
// class Bike : public vehical{//child class , derived class , inherited class
// public:
//     int handleSize;
// };


// //access modifiers explained
// class A{
// private://can not be accessed , can not be inherited
//     int a_ka_private;
// protected://can not be accessed , can be inherited
//     int a_ka_protective;
// public://can be accessed , can be inherited
//     int a_ka_public;
// };

// class B : protected A{//a_ka_protected , a_ka_public as protected
// public:
//     int b_ka_public;
// };

// class C : public B{//b_ka_public as public , a_ka_protected , a_ka_public as protected
// public:
//     int c_ka_public;
// }

// int main(){
// //     Bike honda;
// //     honda.tyreSize = 10;
// //     honda.handleSize = 5;
// //     honda.engineSize = 500;
// //     honda.companyName = "HONDA";
// //     cout<<honda.tyreSize<<endl;
// //     cout<<honda.companyName<<endl;
    

//     B b;
//     b.b_ka_public = 10;
//     b.a_ka_public = 100;
//     return 0;
// }


// //[06] Diamond Problem.
// #include<iostream>
// using namespace std;
// class A{
// public:
//     int a;
    
//     A(){
//         cout<<"A ka constructor call"<<endl;
//     }
// };
// class B : virtual public A{
// public:
//     int b;

//     B(){
//         cout<<"B ka constructor call"<<endl;
//     }
// };
// class C : virtual public A{
// public:
//     int c;

//     C(){
//         cout<<"C ka constructor call"<<endl;
//     }
// };
// class D : public B , public C{
// public:
//     int d;

//     D(){
//         cout<<"D ka constructor call"<<endl;
//     }
// };
// int main(){
//     D tI;
//     return 0;
// }

// //[07] function overriding
// #include<iostream>
// using namespace std;
// class vehical{
// public:
//     int tyreSize;
//     virtual void show(){
//         cout<<"vehical ka show"<<endl;
//     }
// };
// class Bike : public vehical{
// public:
//     int handelSize;
//     void show(){
//         cout<<"Bike ka show"<<endl;
//     }
// };

// class C : public Bike{
// public:
//     void show(){
//         cout<<"C ka show"<<endl;
//     }
// };

// int main(){
//     // vehical a;
//     // a.show();
//     // Bike b;
//     // b.show();
//     // b.vehical::show();

// //compiler POV : vehical type ka hai 
// //compile time binding
// // runtime binding
// //run time POV : Bike ka address hai
//     // // Bike b;
//     // vehical *a;
//     // // a = &b;
//     // a = new Bike;
//     // a->show();
//     // a = new vehical;
//     // a->show();
//     // Bike *k;
//     // k = new C;
//     // k->show();

//     vehical a;
//     Bike b;
//     cout<<sizeof(a)<<endl;
//     cout<<sizeof(b)<<endl;
//     return 0;
// }


//[08] Abstract Class
// #include<iostream>
// using namespace std;
// class vehical{
// public:
//     int tyreSize;
//     int engineSize;

//     virtual void calculateMileage() = 0;
//     virtual void refuel() = 0;
// };
// class Bike{
// public:
//     int handelSize;
//     void calculateMileage(){
//         cout<<"Bike ka show"<<endl;
//     }
//     void refuel(){
//         cout<<"Refuel"<<endl;
//     }
// };
// int main(){
//     Bike v;
//     v.calculateMileage();
//     return 0;
// }

// //[09] Object Overloading
// #include<iostream>
// using namespace std;
// class complexNumber{
// public:
//     int img;
//     int real;

//     // complexNumber add(complexNumber &c1){
//     //     complexNumber c3;
//     //     c3.img = c1.img + this->img;
//     //     c3.real = c1.real + this->real;
//     //     return c3;
//     // }

//     complexNumber operator +(complexNumber &c1){
//         complexNumber c3;
//         c3.img = c1.img + this->img;
//         c3.real = c1.real + this->real;
//         return c3;
//     }
//     complexNumber operator -(complexNumber &c1){
//         complexNumber c3;
//         c3.img = c1.img - this->img;
//         c3.real = c1.real - this->real;
//         return c3;
//     }
// };
// int main(){
//     complexNumber a1,a2;
//     a1.img = 10;
//     a1.real = 5;
//     a2.img = 2;
//     a2.real = 3;

//     // complexNumber a3;
//     // a3.real = a1.real + a2.real;
//     // a3.img = a1.img + a2.img;
//     // cout<<"real : "<<a3.real<<" "<<"imaginary : "<<a3.img<<endl;

//     complexNumber a3 = a1 + a2;
//     cout<<"real : "<<a3.real<<" "<<"imaginary : "<<a3.img<<endl;
//     complexNumber a4 = a1 - a2;
//     cout<<"real : "<<a4.real<<" "<<"imaginary : "<<a4.img<<endl;
    
//     return 0;
// }


//[10] Friend function
#include<iostream>
using namespace std;
class A{
private:
    int a = 10;
public:
    friend void show(A &a);
};
void show(A &a){
    cout<<a.a<<endl;
}
int main(){
    A a;
    show(a);
    return 0;
}