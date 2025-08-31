#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //             cout<<" ";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//     for(int i=n;i>=0;i--){
//         for(int j=1;j<=n-i;j++){
//                 cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//write a programe----> 1- pythAGOROUS THEORM
//2->      armstrong or not
//3->      pattern
//4->      to generate a divisor of an intiger



//--Day2---->>
//factorial,sum of first n natural ,print 2,4,8,16,32,64
//palindrome or not
//factorial 
//


//1111--------------------------<factorial----------------------------->.
    // int n;
    // cin>>n;
    // int fact=1;
    // for(int i=1;i<=n;i++ ){
    //     fact*=i;
    // }
    // cout<<"factorial of "<<n<<" is : "<<fact;

//222222-------------------series of power of 2
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     int sum=pow(2,i);
    //     cout<<sum<<" ";
    //     sum=0;
    // }
    // cout<<endl;
//33333333-------palindrome or not---------------.
int n;
cin>>n;
int orig=n;
int reverse=0;
while(n!=0){
    int a=n%10;
    reverse=reverse*10+a;
    n=n/10;
}
if(reverse==orig){
    cout<<orig<<" is a palindrome number";
}else{
    cout<<orig <<" is not a palindrome number";
}
}