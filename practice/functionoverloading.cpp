#include<iostream>
using namespace std;
class Saini{
public:
// --------------------------------------------- function  overloading----------------------------->>
    // void add(){
    //     cout<<"empty parameterize function"<<endl;
    // }
    // void add(int a,int b){
    //     cout<<"integer sum: "<<a+b<<endl;
    // }
    // void add(float a,float b){
    //     cout<<"Floating sum: "<<a+b<<endl;
    // }
    // int add(double a,double b){
    //     cout<<"double sum: "<<a+b<<endl;
    //     return 1;
    // }

    int multiply(int a,int b){
        return a*b;
    }
    int multiply(int a,int b,int c){
        return a*b*c;
    }
    float multiply(float x, float y){
        return x*y;
    }
    //---------------------------------------------operator overloading----------------------------->>
        // int a;
        // int b;
        // void operator+(Saini &obj){
        //     int val1=this->a;
        //     int val2=obj.a;
        //     cout<<val2 - val1<<endl;
        // }
};
int main(){
    Saini x,y;
    // x.a=5;
    // y.a=9;
    // x + y;
    cout<<x.multiply(2,1)<<endl;
    cout<<x.multiply(4,1,2)<<endl;
    cout<<x.multiply(2.3f,1.0f);

    // Saini s;
    // s.add();
    // s.add(1,2);
    // s.add(2.1142342343243f,3.1234223432432432f);
    // s.add(2.1234567891234567,3.1345678923456789);
    return 0;
}