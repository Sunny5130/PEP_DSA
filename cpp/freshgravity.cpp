#include<bits/stdc++.h>
using namespace std;
//-------------------------------------merge sequence of less than 100 --------------------
bool lesshundred(int v){
    int count=0;
    while(v>0){
        count++;
        v=v/10;
    }
    if(count<3)return true;
    return false;
}
int main(){
    int n;
    int sum=0;
    while(cin>>n){
        if(n==-1)break;
        if(lesshundred(n)==true){
            sum+=n;
        }else if(sum!=0 && lesshundred(n)==false){
            cout<<sum<<endl;
            cout<<n<<endl;
            sum=0;
        }else{
            cout<<n<<endl;
        }
    }
}

