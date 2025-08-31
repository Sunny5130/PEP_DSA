#include<bits/stdc++.h>
using namespace std;

class Saini{
    public:
   virtual  void sound(){
        cout<<"it's Saini sound"<<endl;
    }
};
class Sahab:public Saini{
    public:
    void sound() override{
        cout<<"it's Sahab sound"<<endl;
    }
};
class Sai:public Saini{
    public:
    void sound() override{
        cout<<"It's Sai Sound";
    }
};
int main(){
Saini* s;

Sahab sa;
s=&sa;
s->sound();
// vector
Sai sai;
s=&sai;
s->sound();

return 0;
}