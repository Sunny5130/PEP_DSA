#include <bits/stdc++.h>
using namespace std;

queue<int> reverseKElements(queue<int> q, int k) {

    stack<int> st;
    
    for (int i = 0; i < k && !q.empty(); i++) {
        st.push(q.front());
        q.pop();
    }
    
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    
    int n = q.size();
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }

    return q;
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;  

    cout << "Original Queue: ";
    printQueue(q);

    queue<int> modifiedQueue = reverseKElements(q, k);

    cout << "Modified Queue: ";
    printQueue(modifiedQueue);

    return 0;
}
