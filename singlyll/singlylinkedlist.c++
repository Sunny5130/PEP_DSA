#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
    void insertAthead(Node* &head,int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
    }

    void insertAttail(Node* &tail,int v){
        Node* newnode=new Node(v);
        tail->next=newnode;
        tail=tail->next;
        // or 
        // Node* temp=tail;
        // while(tail->next!=NULL){
        //     tail=tail->next;
        // }
        // tail->next=newnode;
    }

    void insertAtPosition(Node* &head,int pos,int val){
        Node* newnode=new Node(val);
        
        if (pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }
        int count=1;
        Node*temp=head;
        while(count<pos-1){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }

    void deleteAtpos(Node* head,int pos){
        //delte at head;
        if(pos==1){
            Node*temp=head;
            head=head->next;
            delete temp;
        }
        Node* curr=head;
        Node*prev=NULL;
        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        delete curr;

    }


   void deleteByVal(Node* &head, int val) {
    if (head == NULL) return;

    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL && curr->data != val) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}

    void print(Node* &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

int main(){
    Node* node1=new Node(5);
    Node* head = node1;
    Node* tail = node1;
    cout<<"Insert at head Linked list is: ";
    insertAthead(head,8);
    insertAthead(head,2);
    insertAthead(head,83);
    print(head);

    cout<<"insert at tail linkedlist: ";
    insertAttail(tail,8);
    insertAttail(tail,2);
    insertAttail(tail,83);
    print(head);

    cout<<"insert at position: ";
    insertAtPosition(head,2,99);
    insertAtPosition(head,3,11);
    print(head);

    cout<<"After deleting by pos 2:";
    deleteAtpos(head,2);
    print(head);

    cout<<"After delete the  value 11: ";
    deleteByVal(head,11);
    print(head);
    return 0;
}