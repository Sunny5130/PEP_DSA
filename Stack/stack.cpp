#include<iostream>
using namespace std;
class MyStack{
    public:
    int *arr;
    int top;
    int size;
    MyStack(){
        arr=new int[100];
        top=-1;
    }
void push(int val){
    if(top==size-1){
        cout<<"Stack overflow"<<endl;
        }
    top++;
    arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        top--;

    }

    void isEmpty(){
        if(top==-1){
            cout<<"Stack is empty";
        }else{
            cout<<"Stack is not empty";
        }
    }

};


int main(){
    MyStack s;
    s.push(1);
    s.push(2);


}

 input - hello how are you
 output - you are how hello