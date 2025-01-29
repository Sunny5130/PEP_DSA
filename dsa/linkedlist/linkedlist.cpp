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


void insertAtTail(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;
}


void insertAtHead(Node* &head,int val){
    Node*n=new Node(val);
    n->next=head;
    head=n;
    }


void displayNode(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }


void search(Node* &head,int key){
    Node* temp=head;
    if(temp->data != key){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found"<<endl;
    }
}


void deletion(Node* &head,int val){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    while(temp->next->data != val){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


void deleteAtHead(Node *&head){
    Node* temp=head;
    head=head->next;
    delete temp;
}

void reverseList(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    head=prevptr;
}

// Node* reverseListByKStep(Node* &head,int k){
//     Node*prev=NULL;
//     Node* curr=head;
//     Node* next;
//     int count=0;
//     while(count<k && curr!=NULL){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//         count++;
//         }
//         if(next!=NULL){
//     head->next = reverseListByKStep(next,k);
//     } 
//     return prev;
// }

int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    displayNode(head);
    // search(head,2);
    // deletion(head,2);
    // displayNode(head);
    // reverseList(head);
    // displayNode(head);
    // reverseListByKStep(head,2);
    displayNode(head);

    return 0;
    
}