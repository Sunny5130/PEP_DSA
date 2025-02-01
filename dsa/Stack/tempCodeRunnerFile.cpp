
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