// #include<iostream>
// using namespace std;

// int main(){
//     // int x=5;
//     // int *ptr=&x;
//     // cout<< *ptr<<endl;
//     // cout<<  ptr<<endl;
//     // cout<<" "<< &x;
// }

#include<iostream>
using namespace std;
int* min(int& a,int& b){
    if(a<b){
        return &a;
    }else{
        return &b;
    }
}
int main() {
    int x, y;
    cin>>x>>y;

    int* z = min(x,y);  // Pass variables
    cout<<*z<<endl;  // Dereference to get the smaller value
}
