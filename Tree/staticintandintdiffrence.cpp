#include<iostream>
using namespace std;
void foo(){
    int a=0;
    static int b=0;
    a++; b++;
    cout<<"a: "<<a<<", b: "<<b<<endl;
}
int main(){
    foo();
    foo();
    foo();
    return 0;
}


