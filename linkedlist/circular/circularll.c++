#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with value: "<<value<<endl;
    }
};

void insertAtnode(Node* &head,int element,int val){
    if(head==NULL){
        Node*newNode1= new Node(val);
        head=newNode1;
        newNode1->next=head;
    }else{
        Node*newNode=new Node(val);
        Node*temp=head;
        while(temp->data!=element){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
void deleteValue(Node* &head,int val){
    if(head==NULL){
        cout<<"list is empty;";
    }else{
        Node*prev=NULL;
        Node*curr=head;
        while(curr->data!=val){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* &head){
    if (head == NULL) return;
    Node* temp = head;
    do {
        cout<<temp->data<< " ";
        temp = temp->next;
    } while(temp != head);
    cout << endl;
}


int main(){
    // Node* temp=new Node(5);
    Node* head=NULL;
    // print(head);f
    insertAtnode(head,1,9);
    insertAtnode(head,9,3);
    insertAtnode(head,3,4);
    print(head);
    deleteValue(head,3);
    print(head);
}