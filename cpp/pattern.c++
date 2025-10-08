#include<bits/stdc++.h>
using namespace std;
//--------------------------------some pattern problem -----------------------------------------//
int main(){
    int a;
    cin>>a;
    // for(int i=0;i<=a;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<" * "<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int i=a;i>=0;i--){
    //     for(int j=0;j<=i;j++){
    //         cout<<" * "<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int i=0;i<=a;i++){
    //     for(int s=0;s<=a-i;s++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    for(int i=a;i>=0;i--){
        for(int s=0;s<=a-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}