
Node* deleteLastNode(Node* head) {
    // Write your code here
    if (head == nullptr) return nullptr;
    Node* prev = head->prev;  
    Node* front = head->next;
    if (front == nullptr) { 
        if (prev != nullptr) {
            prev->next = nullptr;
        }
        delete head;
        return prev; 
   }
    prev->next = front;
    front->prev = prev;
    head->next = nullptr;
    head->prev = nullptr;
    delete head;
    return head; 
}
