#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter elements of the array:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}