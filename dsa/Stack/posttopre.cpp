#include<bits/stdc++.h>
#include<stack>
using namespace std;
string postToInfix(string postfix) {
    // Write your code here.
     int i=0;
     int n=postfix.length();
    stack<string> st;
    while(i<n){
        if((postfix[i]>='A' && postfix[i]<='Z')||
        (postfix[i]>='a' && postfix[i]<='z')  ){
        string operand(1, postfix[i]); 
        st.push(operand);
        }else{
            string t1=st.top();
            st.pop();
            string t2=st.top();
            st.pop();
            string s="("+ t2 + postfix[i] + t1 + ")";
            st.push(s);
        }
        i++;
    }
    return st.top();
    
}
int main() {
    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    string infix = postToInfix(postfix);
    cout << "Infix Expression: " << infix << endl;

    return 0;
}