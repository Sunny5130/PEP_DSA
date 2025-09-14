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

//----------------------------------constructor-----------------------------------//
class saini{
    public:
    int health;
    saini(int x){
        this->health=x;
    }
    int gethealth(){
        return health;
    }
    void copy(){
        cout<<"Copy constructor"<<" ";
        cout<<health;
    }
};
int main(){
    //saini a; //default constructor 
    saini s(2);     //perameterized constructor
    cout<<s.gethealth()<<endl;
    saini s2(s);           //copy constructor
    s2.copy();

}