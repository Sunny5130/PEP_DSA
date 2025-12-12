// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int m=*max_element(arr,arr+n);
//     int freq[m+1]={0};
//     vector<int>ans={false};
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){

//         cout<<"freq of "<<arr[i]<<" is: "<<freq[arr[i]]<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mx = *max_element(arr, arr + n);

    vector<int> freq(mx + 1, 0);
    vector<bool> printed(mx + 1, false);   // to avoid printing duplicates again

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    cout << "Duplicate elements:" << endl;

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1 && !printed[arr[i]]) {
            cout << arr[i] << " appears " << freq[arr[i]] << " times" << endl;
            printed[arr[i]] = true;   // mark as printed
        }
    }

    return 0;
}
