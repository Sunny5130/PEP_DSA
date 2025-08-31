#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
        map<int,int>mpp;
        for(int i=0;i<a;i++){
            mpp[arr[i]]++;
        }


    int s;
    cin>>s;
    while(s--){
        int number;
        cin>>number;
        cout<<mpp[number]<<" ";
    }
}