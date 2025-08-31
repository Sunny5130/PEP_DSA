#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //--------------------divisors of number---------->
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
//------------------>Armstrong number----------->
    int num;
    cin>>num;
    int original=num;
    // int digits=log10(num)+1;
    int digits=0;
    int temp=original;
     while(temp){
        digits++;
        temp=temp/10;
    }
    int sum=0;
    temp=num;
    while(temp){
        int digit=temp%10;
        temp/=10;
        sum += int(pow(digit, digits) + 0.5);
    }
    if(sum==original){
        cout<<original<<" is an armstrong number";
    }else{
        cout<<"this is not an armstrong number";
    }

    
}