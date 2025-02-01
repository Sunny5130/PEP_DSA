// #include<iostream>
// #include<stack>
// using namespace std;

// int postfix(string s){
//     stack<int> st;

//     for(int i=0; i<s.length(); i++){
//         if(s[i] >= '0' && s[i] <= '9'){
//             st.push(s[i] - '0');
//         } else {
//             int oper2 = st.top();
//             st.pop();
//             int oper1 = st.top();
//             st.pop();

//             switch(s[i]){
//                 case '+':
//                     st.push(oper1 + oper2);
//                     break;
//                 case '-':
//                     st.push(oper1 - oper2);
//                     break;
//                 case '*':
//                     st.push(oper1 * oper2);
//                     break;
//                 case '/':
//                     st.push(oper1 / oper2);
//                     break;
//             }
//         }
//     }
//     return st.top();
// }

// int main(){
//     cout << postfix("74*52+0+-") << endl;
//     return 0;
// }


class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i][0]) || (s[i].size() > 1 && s[i][0] == '-')) {  
                st.push(stoi(s[i])); 
                  }
            else {
                int op1 = st.top();
                st.pop();
                int op2 = st.top(); 
                st.pop();
            
                if (s[i] == "+"){
                    st.push(op2 + op1);
                }else if (s[i] == "-"){
                    st.push(op2 - op1);
                }else if (s[i] == "*"){
                    st.push(op2 * op1);
                }else if (s[i] == "/"){
                    st.push(op2 / op1);
            }
        }
    }
        return st.top();
    }
};
