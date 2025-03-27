#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    
    cout << arr[a-2] << endl;//second largest
    cout << arr[1] << endl;//second smallest
    cout << arr[1] << endl;//second smallest

    return 0;
}