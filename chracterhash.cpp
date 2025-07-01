#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
    int a;
    cin>>a;
    while(a--){
        char ch;
        cin>>ch;
        cout<<hash[ch-'a']<<endl;

    }
}