#include<iostream>
#include<vector>
using namespace std;

// Definition of the Node class
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterized Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
public:
    Node* constructLL(vector<int>& arr) {
        // If the input array is empty, return NULL
        if (arr.size() == 0) return NULL;

        // Create the head node
        Node* head = new Node(arr[0]);

        // Pointer to keep track of the current node
        Node* current = head;

        // Iterate over the array starting from the second element
        for (int i = 1; i < arr.size(); ++i) {
            // Create a new node and link it
            current->next = new Node(arr[i]);
            // Move to the next node
            current = current->next;
        }

        // Return the head of the constructed linked list
        return head;
    }
};

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Example input vector
    vector<int> arr = {1, 2, 3, 4, 5};

    // Construct the linked list
    Node* head = solution.constructLL(arr);

    // Print the linked list
    printLinkedList(head);

    return 0;
}
