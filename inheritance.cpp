
//public public inheritance

// #include<bits/stdc++.h>
// using namespace std;
// class Parent{
//     public:
//     int height;
//     int width;
//     int age;

//     public:
//     void setWidth(int w){
//         this->width=w;
//     }
//     int getWidth(){
//         return width;
//     }
//     int getAge(){
//         return age;
//     }

// };
// class Child: public Parent{
//     public:
//     int sname;
//     void setHeight(int h){
//         this->height=h;
//     }
//     int getHeight(){
//         return height;
//     }
// };
// int main(){
//     Parent p;
//     // p.setWidth(8);
//     // cout<<p.getWidth()<<endl;
//     Child c;
//     // c.setHeight(3);
//     // cout<<c.getHeight()<<endl;
//     cout<<c.getAge()<<endl;
//     c.setWidth(5);
//     cout<<c.getWidth()<<endl;
// }


//<--------------------------------access modifiers---------------------------------->

// parent          child           result

// public          public          public
// public          private         private
// public          protected       protected

// private         public          not accesiable
// private         private         not acceesiable
// private         protected       not accesiable

// protected       public          protected
// protected       private         private
// protected       protected       protected




#include<bits/stdc++.h>
using namespace std;
class Parent{
    protected:
    int height;
    int width;
    int age;

    void setWidth(int w){
        this->width=w;
    }
    int getWidth(){
        return width;
    }
    void setAge(int a){
        this->age=a;
    }
};
class Child:protected Parent{
// protected:
public:
    // void setHeight(int h){
    //     this->height=h;
    // }
    // int getHeight(){
    //     return height;
    // }
    int getAge(){
        return age;
    }
};
class Child2:private Child{
    int getHeight(){
        return height;
    }
};

int main(){
    Parent p;
    cout<<p.getWidth();
    Child c;
    cout<<c.age<<endl;
    cout<<c.getHeight()<<endl;
    Child2 co;
    co.getHeight();









    // p.setWidth(8);
    // cout<<p.getWidth()<<endl;
    // Child c;
    // c.setHeight(3);
    // cout<<c.getHeight()<<endl;
    // cout<<c.getAge()<<endl;
    // c.setWidth(5);
    // cout<<c.getWidth()<<endl;

}