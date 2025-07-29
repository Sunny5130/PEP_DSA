#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    if(head==NULL){
        Node* temp=new Node(val);
        head=temp;

    }else{
    Node*newNode=new Node(val);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    }
}
void insertAtTail(Node* &head,int val){
    Node* newNode=new Node(val);
     if (head == NULL) {
        head = newNode;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}
void insertAtPos(Node* &head,int pos,int v){
    Node* newNode=new Node(v);
    int count=1;
    Node*temp=head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    temp->next->prev=newNode;
}
void deleteAtPos(Node* &head,int pos){
    Node*curr=head;
    Node*prevs=NULL;
    int count=1;
    while(curr!=NULL && count<pos){
        prevs=curr;
        curr=curr->next;
        count++;
    }
    prevs->next=curr->next;
    curr->next->prev = prevs;
    delete curr;
}

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int lengthDLL(Node*head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    Node* newNode=new Node(10);
    Node* head=newNode;
    cout<<"Insert at head: ";
    print(head);
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,5);
    print(head);
    cout<<endl;
    cout<<"Insert at tail: ";
    insertAtTail(head,2);
    insertAtTail(head,4);
    print(head);
    cout<<endl;
    cout<<"insert at position: ";
    insertAtPos(head,2,23);
    insertAtPos(head,7,30);
    print(head);
    cout<<endl;
    cout<<"After deleting position 2: ";
    deleteAtPos(head,2);
    print(head);
    cout<<endl;
    int x=lengthDLL(head);
    cout<<"Length of DLL: "<<x;
}