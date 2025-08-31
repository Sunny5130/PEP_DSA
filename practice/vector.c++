#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(2,-1);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" "<<endl;
    }
    vector<int>vdequeue;
    cout<<"Size of vector is: "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<endl;
    v.push_back(0);
     cout<<"Size of vector is: "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<endl;
    v.push_back(1);
     cout<<"Size of vector is: "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<endl;
    v.push_back(2);
     cout<<"Size of vector is: "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<endl;
    v.push_back(3);
     cout<<"Size of vector is: "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<endl;
    v.push_back(4);
    cout<<"Size of vector is: "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<endl;
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
        cout<<"Capacity of vector after pop is : "<<v.capacity()<<endl;

}























































// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     cout<<"capacity of vector v: "<<v.capacity()<<endl;
//     v.push_back(0);
//     cout<<"capacity of vector v: "<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"capacity of vector v: "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"capacity of vector v: "<<v.capacity()<<endl;
//     v.push_back(9);
//     cout<<"capacity of vector v: "<<v.capacity()<<endl;
//     v.push_back(50);
//     cout<<"capacity of vector v: "<<v.capacity()<<endl;

//     cout<<"Size of vector is: "<<v.size()<<endl;
//     cout<<"element at third index of vecot is: "<<v.at(3)<<endl;
//     cout<<"Back element of vector is: "<<v.back()<<endl;
//     cout<<"Front element of the vector is: "<<v.front()<<endl;
//     cout<<"Printing the vector: ";
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     cout<<"After using pop_back: ";
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }



//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

// }






























