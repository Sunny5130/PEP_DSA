#include <bits/stdc++.h>
using namespace std;

class Grade {
public:
    int math, dsa, cpp, softs;
    char want;

    Grade() {
        cout << "Welcome to Grade Calculation Calculator!" << endl;
        cout << "Do you want to calculate grade? (Y/N): ";
        cin >> want;

        if (want == 'Y' || want == 'y') {
            calculate();
        } else if (want == 'N' || want == 'n') {
            cout << "Thank you. Exiting program." << endl;
        } else {
            cout << "Invalid input. Exiting program." << endl;
        }
    }

    void calculate() {
        cout << "Enter marks for each subject out of 100: " << endl;
        cout << "Math: ";
        cin >> math;
        cout << "DSA: ";
        cin >> dsa;
        cout << "C++: ";
        cin >> cpp;
        cout << "Soft Skills: ";
        cin >> softs;

        float avg = (math + dsa + cpp + softs) / 4.0;

        cout << "Average Marks: " << avg << endl;
        cout << "Grade: ";

        if (avg >= 90) {
            cout << "O";
        } else if (avg >= 80) {
            cout << "A+";
        } else if (avg >= 70) {
            cout << "A";
        } else if (avg >= 60) {
            cout << "B+";
        } else if (avg >= 55) {
            cout << "B";
        } else if (avg >= 50) {
            cout << "C";
        } else if (avg >= 40) {
            cout << "D";
        } else {
            cout << "Fail";
        }

        cout << endl;
    }
};

int main() {
    Grade g;
    return 0;
}
