#include<iostream>
#include<string>
using namespace std;

int main(){
    string s2("xyz");
    string s1 = s2;
    string s3 = "abc" + s2;
    cout << s1 << " " << s2 << " " << s3 << endl;
    return 0;
}
