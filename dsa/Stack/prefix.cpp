#include<iostream>
#include<stack>
using namespace std;

int prefix(string s){
    stack<int>st;

    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0'); 
            //o mei minus integer banane ke liye kiya hai.
        }else{
            int oper1=st.top();
            st.pop();
            int oper2=st.top();
            st.pop();

        switch(s[i]){
            case '+':
            st.push(oper1 + oper2);
            break;
            case '-':
            st.push(oper1 - oper2);
            break;
            case '*':
            st.push(oper1 * oper2);
            break;
            case '/':
            st.push(oper1 / oper2);
            break;
        }
    }
    }
    return st.top();
}

int main(){
    cout<<prefix("-+7*45+20")<<endl;

}