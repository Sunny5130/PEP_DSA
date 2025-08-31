#include<iostream>
using namespace std;
class Saini{

    // private:
    // int health;

    public:
    // int level;
    // int h;
    // Saini(int p){
    //     h=p;
    // }
    // void res(){
    //     cout<<h;
    // }
    // int getHealth(){
    //     return health;
    // }

    // void setHealth(int h){
    //     health=h;
    // }

    // Saini(){
    //     cout<<"Hello saini sahab";
    // }

    // int health;
    // Saini(int health){
    //     this->health=health;
    // }
    // void res(){
    //     cout<<"perameterized constructor call"<<endl;
    //     cout<<"health is: "<<health;
    // }
    // void print(){
    //     cout<<"copy constructor call"<<endl;
    //     cout<<"health is: "<<health;
    // }
    ~Saini(){
        cout<<"Destructor called"<<endl;
    }
    
};
int main(){
    // cout<<"hii"<<endl;
    Saini a;
    Saini *b=new Saini; 
    delete b;
    //Saini a;
//     Saini b(5);
//     b.res();
// cout<<endl;
//     Saini s(b);
//     s.print();

    // cout<<endl;
    // cout<<"hello"<<endl;
    // Saini *b =new Saini;

    // cout<<a.getHealth()<<endl;
    // cout<<a.level;

    // cout<<(*b).getHealth()<<endl;
    // cout<<b->level;

    // a.setHealth(21);
    // cout<<a.getHealth()<<endl;

    // (*b).setHealth(21);
    // cout<<b->getHealth()<<endl;




//     h1.a=2;
//     h1.b=34;
// cout<<"value of a: "<<h1.a<<endl;
// cout<<"value of b: "<<h1.b<<endl;
    return 0;
}