#include <iostream>
using namespace std;

class MyStack {
public:
    int *arr;
    int top;
    int size;

    MyStack(int capacity = 100) {  
        size = capacity;
        arr = new int[size];
        top = -1;
    }

    void push(int val) {
        if (top == size - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = val;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element: " << s.peek() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}


