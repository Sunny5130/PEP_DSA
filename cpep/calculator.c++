#include<iostream>
using namespace std;
int main(){
    // int a,b;
    // double = a,b;
    double a,b;
    char op;
    cout<<"Please enter first number: ";
    cin>>a;
    cout<<"What operation you want to perform: ";
    cin>>op;
    cout<<"enter your second number: ";
    cin>>b;
    if(op=='+'){
        cout<<"Sum of "<<a<<" and "<<b<<"is :"<<a+b;
    }else if(op=='-'){
        cout<<"Subtract of "<<a<<" and "<<b<<"is :"<<a-b;
    }else if(op=='*'){
        cout<<"Multiplication of "<<a<<" and "<<b<<"is :"<<a*b;
    }else if(op=='/'){
        if(b==0){
            cout<<"if you want to divide any number by 0 output is infinite or not defined;";
        }else{
        cout<<"Division of "<<a<<" and "<<b<<"is :"<<a*b;
        }
    }else{
        cout<<"this is not a arth,etic operator";
    }

}