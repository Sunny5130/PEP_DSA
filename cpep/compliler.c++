#include<bits/stdc++.h>
using namespace std;
map<string, int> variables;

int evaluate(string expr);
// Trim function
string trim(const string& s) {
    size_t start = s.find_first_not_of(" \t");
    size_t end = s.find_last_not_of(" \t");
    return (start == string::npos) ? "" : s.substr(start, end - start + 1);
}
// Evaluate arithmetic expressions (only + and * for now)
int evaluate(string expr) {
    istringstream iss(expr);
    int result = 0;
    int current = 0;
    char op = '+';
    string token;
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            op = token[0];
        } else {
            if (isalpha(token[0])) current = variables[token];
            else current = stoi(token);

            switch (op) {
                case '+': result += current; break;
                case '-': result -= current; break;
                case '*': result *= current; break;
                case '/': result /= current; break;
            }
        }
    }
    return result;
}
// Parse and execute a single line
void execute(string line) {
    line = trim(line);
    if (line.substr(0, 5) == "print") {
        string var = trim(line.substr(5));
        cout << variables[var] << endl;
    } else {
        size_t eq = line.find('=');
        string var = trim(line.substr(0, eq));
        string expr = trim(line.substr(eq + 1));
        variables[var] = evaluate(expr);
    }
}
// Main REPL loop
int main() {
    cout << "MiniLang Compiler (type 'exit' to quit)" << endl;
    string line;
    while (true) {
        cout << ">>> ";
        getline(cin, line);
        if (line == "exit") break;
        execute(line);
    }
    return 0;
}
