#include<bits/stdc++.h>
using namespace std;
string reversestring(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        swap(str[i++],str[j--]);
    }
    return str;
}
int main(){
    string s;
    getline(cin,s);
    string res="";
    string ans="";
    for(int i=0;i<s.length();i++){
            res+=s[i];
            if(s[i]==' '){
                ans+=reversestring(res)+" ";
                res="";
            }
    }
    ans+=reversestring(res);
    cout<<ans;
}

