// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

//-----------------------------------------function overloading---------------------------------------////////////////////
// int sum(int a,int b,int c){
//     int x=a+b+c;
//     return x;
// }
// int sum(int a,int c){
//     return a+c;
// }
// int main(){
//    cout<<sum(2,3)<<endl;
//     cout<<sum(2,4,3);
// return 0;
// }

////////------------------------------------------Binary search--------------------------------------------------------////
// int main(){
//     int a,s;
//     cout<<"SIze of an array: ";
//     cin>>a;
//     cout<<"Element to sarch: ";
//     cin>>s;
//     int arr[a];
//     cout<<"Take input of "<<a<<" size: ";
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     int l=0;
//     int r=a-1;
//     while(l<=r){
//         int mid=(l+r)/2;
//         if(arr[mid]==s){
//             cout<<"index of "<<s<<" is: "<<mid;
//             break;
//         }
//         else if(arr[mid]<s){
//             l=mid+1;
//         }else{
//             r=mid-1;
//         }
//     }
//     return 0;
// }

class saini{
    // public:
    int a=3;
    char b;
    double c;
    // saini(){
    //     cout<<"Hello I am Constructor "<<endl;
    // }
    // saini(int a){
    //     cout<<"Hello i am second constructor"<<a;
    // }
    public:
    void get(){
        cout<<a;
    }
    int set(int a){
        b=a;
        return b;
    }
};
int main(){
    saini s;
    saini* p=new saini;
    // saini s2(2);
    // cout<<sizeof(saini);
    // cout<<s.a;///if a is private then we will not excess a from class saini
    cout<<"Gety value of  private data memeber a using getter: ";s.get();cout<<endl;
   cout<<"Set value of b: "<<s.set(5)<<endl;
   cout<<"Set value of b: "<<p->set(5)<<endl;
}