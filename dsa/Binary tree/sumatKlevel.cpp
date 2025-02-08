#include <iostream>
#include <queue>
using namespace std;

// Definition of Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to find the sum of nodes at level K
int sumAtK(Node* root, int k) {
    if (root == NULL) return -1; 

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // Marker for level change

    int level = 0;
    int sum = 0;

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (node != NULL) {
            if (level == k) {
                sum += node->data; // Add node value if it's at level K
            }
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        } else if (!q.empty()) { // Level marker encountered
            q.push(NULL); // Add marker for next level+
            level++; // Move to next level
        }
    }

    return sum;
}

// Main function
int main() {
    // Creating the binary tree manually
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    /*
        Constructed Tree:
                1
               / \
              2   3
             / \   \
            4   5   6
    */

    int k; // Level at which we want to find the sum
    cout<<"Enter the value of level :";
    cin>>k;
    cout << "Sum of nodes at level " << k << ": " << sumAtK(root, k) << endl;

    return 0;
}
