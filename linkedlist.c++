#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

int main(){
    //create an object   in heap //or create an node
Node* node1 = new Node();

cout<<node1->data<<endl;   //-> means takig outputfor pointers
cout<<node1->next<<endl;


}