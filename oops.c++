
//===============================================function overriding-----------------------------------=======================>>.
//-----same function but diffrent iplemenatiion==================..
// #include<iostream>
// using namespace std;
// class parent{
//     public:
//     virtual void saini(){
//         cout<<"I am Parent"<<endl;
//     }
// };
// class child:public parent{
//     public:
//     void saini(){
//         cout<<"i am child"<<endl;
//     }
// };
// int main(){
//     parent p;
//     child c;
//     p.saini();
//     c.saini();
// }


//-----------------------static keyword-------------------
// class saini{
//     public:
//     saini(){
//         cout<<"constructor"<<endl;
//     }
//     ~saini(){
//         cout<<"Delete oblect";
//     }
// };
// // void fun(){
//     static int x=0;
//     cout<<"x = "<<x<<endl;
//     x++;
// }
// int main(){
// // fun();
// // fun();
// // fun();
//     // saini s;
//     saini* s =new saini();
//     // delete s;
    
// }

// class encapsule{
//     int accoutno;
//     double balance;
//     public:
//     encapsule(int acc,double ruppes){
//         accoutno=acc;
//         balance=ruppes;
//     }
//     void details(){
//         // cout<<"My account number is : "<<accoutno<<endl;
//         cout<<"My balance for this account number is = "<<balance;
//     }
//     int setruppes(int h){
//         this->balance=h;
//     }

// };
// int main(){
//     encapsule e(200123,2000);
//     e.details();
//     cout<<endl<<endl;
//     e.setruppes(3000);
//     e.details();
// }



// #include <iostream>
// using namespace std;

// class Shape {   // Abstract class
// public:
//     // Pure virtual function
//     virtual void draw() = 0;  
// };

// class Circle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing Circle" << endl;
//     }
// };

// class Rectangle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing Rectangle" << endl;
//     }
// };

// int main() {
//     // Shape s; //❌ Error: cannot create object of abstract class

//     Shape* s1 = new Circle();
//     Shape* s2 = new Rectangle();

//     s1->draw();   // Drawing Circle
//     s2->draw();   // Drawing Rectangle

//     delete s1;
//     delete s2;
// }


// #include<iostream>
// using namespace std;
// class Abstract{
//     public:
//     virtual void show()=0;
//     virtual ~ Abstract(){
//         cout<<"Deleted the object for inherited classes"<<endl;
//     }
// };
// class saini: public Abstract{
//     public:
//     void show() override{
//         cout<<"I am saini"<<endl;
//     }
// };
// class saini2: public Abstract{
//     public:
//     void show() override{
//         cout<<"I am saini2"<<endl;
//     }
// };
// int main(){
//     // Abstract a;
//     Abstract* s1=new saini;
//     Abstract* s2=new saini2;
//     s1->show();
//     s2->show();
//     delete s1;
//     delete s2;

// }

#include <iostream>
#include <thread>
using namespace std;

int counter = 0;  // shared variable

void task() {
    for (int i = 0; i < 100000; i++) {
        counter++;  // race condition here
    }
}

int main() {
    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    cout << "Final counter (without mutex) = " << counter << endl;
    return 0;
}
