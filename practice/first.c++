

//----------------------Array traversal in c++ ------------------------//



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }

//     int count =0;
//     for(int i=0;i<a;i++){
//         count+=arr[i];
//     }
// for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//      }
//      return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int a;
// cin>>a;
// switch(a){
//     case 1:
//     cout<<"Saini";
//     break;
//     default:
//     cout<<"kuch nhai";

// }
// }





//--------------------sort an array by using algorithm header file------------------------//



// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the size of an array: ";
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cout<<"enter the "<< i+1 <<" element: ";
//         cin>>arr[i];
//     }
//     cout<<"your array is: ";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     sort(arr,arr+a);
//     cout<<"your updated array is: ";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }






// --------------------insertion of an element in the array------------------------//



// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter size of an array:";
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     int val,ind;
//     cout<<"enter the value of element number: ";
//     cin>>val;
//     cout<<"Enter index valuer wher you want to insert a element: ";
//     cin>>ind;
//     if (ind <0 || ind>a){
//         cout<<"Index out of bound";
//     }
    
//     for(int i=a;i>ind;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[ind]=val;
//     a++;
//     cout<<"your array after insertion an element";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }
// }





//---------------------- Deletion of an element for an array by index value-------------------------//



// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter size of an array: ";
//     cin>>a;
//     int arr[a];
//     cout<<"Enter array elements: ";
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     int ind;
//     cout<<"Enter the index value of element you want to deletion: ";
//     cin>>ind;
//     for(int i=ind;i<a-1;i++){
//         arr[i+1]=arr[i];
//     }
//     a--;
//     cout<<"Your updated array after deletion: ";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     } 
// }






//--------------------searching an element from an array--------------------//


//-----------------Linear searching an elementy from an array-----------------//


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//     }
//     int s;
//     int count=0;
//     cin>>s;
//     for(int i=0;i<a;i++){
//         if(arr[i]==s){
//             count+=1;
//         }
//     }
//     if(count>=1){
//      cout<<s<<" is present in the array in "<<count<<" times";
//     }else{
//         cout<<s<<" is not present in this array";
//     }
// }



//------------------------Binary searching an ele,e=ment from an array-----------------------//

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int b, int key) {
//     int count = 0;
//     for (int i = 0; i < b; i++) {
//         if (arr[i] == key) {
//             count += 1;
//         }
//     }
//     return count;
// }

// int main() {
//     int a;
//     cin >> a;
//     int arr[a];
//     for (int i = 0; i < a; i++) {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     int count = linearSearch(arr, a, key);
//     if (count >= 1) {
//         cout << key << " is present here";
//     } else {
//         cout << key << " is not present here";
//     }
//     return 0;
// }









//------------------Sorting of an array by insertion,bubble and selection------------------------//


//------------------Bubble sort-----------------//

// #include<iostream>
// using namespace std;
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
// int a;
// cout<<"Enter size of an array: ";
// cin>>a;
// int arr[a];
// cout<<"Enter elements of an array: ";
//     for(int i=0;i<a;i++){
//       cin>>arr[i];
//     }
// bubblesort(arr,a);
// cout<<"Your array after sorting: ";
//  for(int i=0;i<a;i++){
//       cout<<arr[i]<<" ";
//     }

// }


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    reverse(a.begin(),a.end());
    cout<<a;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;

// }