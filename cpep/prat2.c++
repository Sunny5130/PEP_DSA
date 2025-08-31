#include<iostream>
using namespace std;


int main(){

    //----------------while loop--------->
    // int i=-5;
    // while(i<=0){
    //     cout<<i<<" ";
    //     i++;
    // }
    // return 0;
    // int n;
    // cin>>n;
    // for(int i=1;i<11;i++){
    //     cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    // }

// -------------------------->we can declare  infinite loop  in two ways...........--------------------->

    // for(;;){
    //     cout<<"endless";
    // }

    // for(int i=0;;i++){
    //     cout<<"endless loop";
    // }

//-------------------do while loop------------>
// int i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }while(i<=10);


//--------------gotot label-------------->

// int i=0;
// start:
//     if(i<5){
//         cout<<i<<" ";
//         i++;
//         goto start;
//     }




//------------------FUnction=-------------->>

int sum(int x,int y);
int a,b;
cin>>a>>b;
cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum(a,b);
}

int sum(int x,int y){
    return x+y;
}