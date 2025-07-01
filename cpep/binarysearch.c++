#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int val;
cin>>val;
int binaryS(n,arr)
// int l=0;
// int r=n-1;
// int mid=(l+r)/2;
// while(l<=r){
//     if(val>arr[mid]){
//         l=mid+1;
//     }else{
//         r=mid-1;
//     }
//     mid=(l+r)/2;
// }
// cout<<"value of "<<val <<" at: "<<l<<" index.";
return 0;
}

int binaryS(int ar[],int n,int val){
    int l=0;
    int r=n-1;
    int mid=(l+r)/2;
    while(l<=r){
        if(val>=mid){
            r=mid+1;
        }else{
            l=mid+1;
        }
        mid=(l+r)/2;
    }
    return l;
}