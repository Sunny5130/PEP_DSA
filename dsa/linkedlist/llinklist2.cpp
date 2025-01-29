#include<iostream>
using namespace std;   
class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertatTail(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return; 
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void deleteAtHead(Node* &head){
    Node* temp=head;   
    Node* todelete=head; 
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete todelete;
}

Node* FloydloopDetection(Node* &head){
    if(head==NULL) return NULL;
   
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    if(slow==fast) return slow;
    }
    return NULL;
    }

Node* getStartingNode(Node* head){
    if(head==NULL) return NULL;
    Node* intersection=FloydloopDetection(head);
    Node* slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    cout<<slow->data;
}


// question 1 if any loop is exist in linked list then remove it and print list
//question 2 for finding the middle of linked list use two pointer approach slow and fast

void displayNode(Node* head){
        Node* temp=head;
        do{
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        while(temp!=head);
        
        cout<<"NULL"<<endl;
    }


int main(){
    Node* head=NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);

    // displayNode(head);
    // deleteAtHead(head);
    displayNode(head);
    FloydloopDetection(head);
    // displayNode(head);
    getStartingNode(head);

        return 0;

}