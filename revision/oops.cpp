#include<iostream>
using namespace std;
//----------------------------Access specifier---------------------------------------??
// class saini{
//     private:
//     int b=2;
//     public:
//     int a=2;
//     int getB(){
//         return b;
//     }
//     void setB(int x){
//         b=x;
//     }

// };
// int main(){
// saini s;
// cout<<sizeof(s)<<endl;
// cout<<s.a<<" ";
// cout<<s.getB()<<" ";
// s.setB(12);
// cout<<s.getB()<<" ";
// }

//------------------------------------------Static and Dynamic allocation of objects---------------------------//
// class Saini{
//     int x=2;
//     public:
//     int y=23;
//     int get(){
//         return x;
//     }
//     void set(int a){
//         x=a;
//     }
// };
// int main(){
    // Saini s;
    // cout<<s.get()<<" ";
    // s.set(12);
    // cout<<s.get();
//     Saini *s=new Saini();
//     (*s).set(12);
//     cout<<(*s).get()<<endl;
//     cout<<s->y<<" ";
//     cout<<s->get();
// }

// class Saini{
//     int a,b;
//     public:
//     void set(int x,int y){
//         a=x;
//         b=y;
//     }
//     int Area(){
//         return a*b;
//     }
// };
// int main(){
//     Saini s;
//     s.set(23,2);
//     cout<<"Area: "<<s.Area();
// }
// class saini{
//     public:
//     saini(int x,int y){
//         cout<<"Sum of x and y is: "<<x+y;
//     }
// };
// int main(){
//     saini s(2,3);
// }

// //----------------------------------constructor-----------------------------------//
// class saini{
//     public:
//     int health;
//     saini(int x){
//         this->health=x;
//     }
//     int gethealth(){
//         return health;
//     }
//     void copy(){
//         cout<<"Copy constructor"<<" ";
//         cout<<health;
//     }
// };
// int main(){
//     //saini a; //default constructor 
//     saini s(2);     //perameterized constructor
//     cout<<s.gethealth()<<endl;
//     saini s2(s);           //copy constructor
//     s2.copy();
// }


//--------------------------destructor and static data meber and memeber function---------------------//
// class saini{
//     public:
//     int x;
//     ~saini(){
//         cout<<"Desturctor is called"<<endl;
//     }
// };
// int saini::x=2;
// int main(){
//     saini s;
//     saini *s2=new saini();
//     delete (s2);
//     cout<<saini:: x<<endl;
// }


//------------------------------ecncapu;ation----------------//
//it is cor concept of oops in which or it involves binding the data attributesa and memeber method(function) act as a single data known as class
//
// class saini{
//     private:
//         string health;
//         int money;
//         int age;
//     public:
//     void sethealthmoney(string x, int y,int a){
//         this->health=x;
//         this->money=y;
//         this->age=a;
//     }
//     int getmoney(){
//         return money;
//     }
//     string gethealth(){
//         return health;
//     }
// };
// int main(){
//     saini s;
//     s.sethealthmoney("good",12000,13000);
//     cout<<s.getmoney()<<" ";
//     cout<<s.gethealth();

// }

//-------------------inheritance---------------------------//
// class parent{
//     private:
//     int x=2;
//     int y=3;
//     public:
//     // parent(int p,int q){
//     //     this->x=p;
//     //     this->y=q;
//     // }
//     int sum(){
//         return x+y;
//     }
// };
// class child: protected parent{
//     protected:
//     int ch=2;

// };
// class child2: public child{
//     public:
//     int getch(){
//         return ch;
//     }
// };
// class child3: public child2{
//     public:
//     void get(){
//         cout<<" "<<sum();
//     }
// };
// int main(){
//     // parent p(2,3);
//     // cout<<p.sum();
//     // child c;
//     // cout<<c.ch;
//     child2 c2;
//     cout<<c2.getch();
//     child3 c3;
//     c3.get();
// }


//------------------------------------------types of inheritance--------------------------------------//
// 1)  single inheritance-- a child class is inherit from only one base class
// 2) multiple inheritanc-- a child class is inherit from multiple base class
// 3) multilevel inheritanc-- a child class is inherit from another child class and forming a chain like inheritance
// 4) herarical inheritanc -- multiple child class inherit from single base class   
// 5) hybrid inheritanc--  combination of two or more types of inheritance known as hybrid inheritance


//  (1)
// class Parent{
// };
// class chld: public Parent{
// };


//   (2)
// class Parent1{
// };
// class Parent2{
// };
// class child: public Parent1,public Parent2{
// };

//  (3)
// class a{
// };
// class b:public a{
// };                        //forming a chain of inheritance
// class c:public b{
// };

//(4)
// class a{
// };
// class c:public a{
// };
// class d: public a{
// };

//(5)
// class a{
// };
// class b{
// };
// class c:public a,public b{
// };
// class d:public a{
// };
// class e:public a{
// };

// multilevel a derived/child class is inherit from another child class formoing a chain
//single a chid class in inherit form only one base class
//multiple a child class is inherit from many base class
//herarical  a many child class is inherit from single base class
//hybrid whne two or more types of inheritance work as together