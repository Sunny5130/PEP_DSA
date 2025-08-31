#include<iostream>
#include<unordered_map>
using namespace std;
// int main(){
//     unordered_map<string,int>m;
//     pair<string,int>p("saini",1);
//     m.insert(p);
// cout<<"index of saini is: "<<m.at("saini")<<endl;
// m["ny"]=2;
// m["su"]=3;
// // m["su"]=2;
// m["suy"]=0;
//     unordered_map<string,int>::iterator it;
//     for(auto it=m.begin();it!=m.end();it++){
//         // cout<<it->first<<" "<< it->second<<endl;
//         cout<< (*it)<<endl;
//     }
// }


// int main(){
//     int a=2;
//     int b=3;
//     cout<<"a: "<<a;
//     cout<<" b: "<<b<<endl;
//     // a=a+b;
//     // b=a-b;
//     // a=a-b;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout<<"a: "<<a;
//     cout<<" b: "<<b<<endl;
// }


//rverse a string without using for loop
int main(){
    string s="sainis";
    // for(int i=s.length()-1;i>=0;i--){
    //     cout<<s[i];
    // }
    int l=0;
    int r=s.length()-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    cout<<s;
}