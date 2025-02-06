int sumNodes(TreeNode<int> *root) {
    if (root == NULL) return 0; 

    int leftSum = sumNodes(root->left);   
    int rightSum = sumNodes(root->right); 

    return leftSum + rightSum + root->data;
}