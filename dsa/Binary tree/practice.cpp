#include <iostream>
using namespace std;

template <typename T>
class TreeNode{
public:
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T val) {
        data = val;
        left = right = NULL;
    }
};

int countNodes(TreeNode<int> *root) {
    if (root == NULL) return 0;
    int lefth = countNodes(root->left);
    int righth = countNodes(root->right);
    return lefth + righth + 1;
}
int sumNodes(TreeNode<int> *root) {
    if (root == NULL) return 0; 

    int leftSum = sumNodes(root->left);   
    int rightSum = sumNodes(root->right); 

    return leftSum + rightSum + root->data;
}
int heightOfTree(TreeNode<int> *root) {
    if (root == NULL) return 0; 

    int lefth = heightOfTree(root->left);   
    int righth = heightOfTree(root->right); 

    return max(lefth,righth)+1;
}


int main() {
    TreeNode<int>* root = new TreeNode<int>(1);
    root->left = new TreeNode<int>(2);
    root->right = new TreeNode<int>(3);
    root->left->left = new TreeNode<int>(4);
    root->left->right = new TreeNode<int>(5);
    root->right->right = new TreeNode<int>(6);

    /*
        Constructed Tree:
                1
               / \
              2   3
             / \   \
            4   5   6
    */

    cout << "Total number of nodes in the tree: " << countNodes(root) << endl;
    cout << "Sum of all nodes in the tree: " << sumNodes(root) << endl;
    cout<<"Maximum Height Of Tree: "<<heightOfTree(root);

    return 0;
}
