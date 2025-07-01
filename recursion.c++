
#include<iostream>
using namespace std;
int power(int n){
    //base case
if(n==0){
    return 1;
}
//recursive relation 
return 2*power(n-1);

//both cases are needed without base case you cannot do this question
}
int main(){
    cout<<"Value of n is: ";
    int n;
    cin>>n;
    int count=power(n);
    cout<<"Power of 2 to the power of " << n << " is: "<<count;
}
