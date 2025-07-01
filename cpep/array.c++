// #include<iostream>
// #include<climit>
// #include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int first=INT_MIN;
    // int second=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>first){
    //         first=max(first,arr[i]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=first){
    //         second=max(second,arr[i]);
    //     }
    // }
    // cout<<"max of an array is: "<<first<<endl;
    // cout<<"max of an array is: "<<second;



    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
// }

char str[80];
gets(str);
int len=0;
for(int i=0;str[i]!='\0';i++) len=i;
cout<<"length of string: "<<len<<endl;

}