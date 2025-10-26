#include<bits/stdc++.h>
using namespace std;
int main(){
    // int m,n;
    // cin>>m>>n;
    // int count1=0,count2=0;
    // for(int i=1;i<=n;i++){
    //     if(i%m==0)count1+=i;
    //     else count2+=i;
    // }
    // cout<<count2-count1;/
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //second largest element at even positon
    int fl=INT_MIN,sl=INT_MIN;
    for(int i=0;i<n;i+=2){
        if(arr[i]>fl)fl=arr[i];
    }
    for(int i=0;i<n;i+=2){
        if(arr[i]>sl && arr[i]!=fl)sl=arr[i];
    }
    //second smallest element at odd position
    int fs=INT_MAX,ss=INT_MAX;
    for(int i=1;i<n;i+=2){
        if(arr[i]<fs)fs=arr[i];
    }
    for(int i=1;i<n;i+=2){
        if(arr[i]<ss && arr[i]!=fs)ss=arr[i];
    }
    cout<<sl<<" "<<ss<<endl;
    //output is sum of both 
    cout<<"sum is:"<<sl+ss<<endl;
}
