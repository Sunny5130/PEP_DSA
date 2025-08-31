#include<iostream>
// #include<vector>
// #include<unordered_map>
using namespace std;

// string maxFreq(vector<string> &arr){
// unordered_map<string,int>map;
//    int maxfreq=0;
//    string maxwr="";
//    for(int i=0;i<arr.size();i++){
//         map[arr[i]]++;
//         if(maxfreq < map[arr[i]]){
//             maxfreq=map[arr[i]];
//             maxwr=arr[i];
//         }
//    }
//    return maxwr+" "+to_string(maxfreq);

// }

// int main(){
//     int n;
//     cin>>n;
//     vector<string>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     string x=maxFreq(arr);
//     cout<<"Most frequent element is: "<< x <<endl;
//     // return 0;
// }



// // #include<iostream>
// // using namespace std;

// // int main(){
// //     //count maximum char
// //     string s;
// //     getline(cin,s);
// //     int arr[26]={0};
// //     for(int i=0;i<s.length();i++){
// //             char ch=s[i];
// //             if(ch>='a' && ch<='z'){
// //                 arr[ch-'a']++;
// //             }
// //     }
// //     int maxs=0;
// //     char maxc='a';
// //     for(int i=0;i<26;i++){
// //         int maxf=arr[i];
// //         if(maxf>maxs){
// //         maxs=max(maxf,maxs);
// //         maxc='a'+i;
// //         }
// //     }
// //     cout<<maxc<<" : "<<maxs<<endl;
// // }

// #include<iostream>
// using namespace std;
// int main(){
// int a,b,c;
// cout<<"Take input first number: ";
// cin>>a;
// cout<<"Take input of second number: ";
// cin>>b;
//  c=(a+b)/2;
// cout<<"Average of "<<a<<" and "<<b<<" is: "<<c; 
// }
//-----------------------------------------------------classes and object------------------..>>>>>>.....
class saini{
    // public:
    int a=2;
    int b;

    public:
    void sum(int a,int b){
        cout<<"SUM is: "<<a+b;
    }
    int getsum(){
       return a; 
    }

};
int main(){
    saini s;
    saini *ss=new saini();
    s.sum(2,3);
    cout<<endl;
    ss->sum(2,4);
    cout<<endl;
    (*ss).sum(2,4);
    cout<<endl<<s.getsum();
}