#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;

}
void insertAtTail(Node* &tail,int val){
    Node* temp=new Node(val);
    tail->next=temp;
    tail=tail->next;
}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){
    Node* node1=new Node(10);
    Node* head = node1;
    Node* tail=node1;
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtHead(head,4);
    // display(head);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    display(head);

}