int sumAtK(Node* root, int k){
if(root==NULL) return -1;

queue<Node*> q;
q.push(root);
q.push(NULL);

int level = 0;
int sum = 0;

while(!q.empty()){
Node* node = q.front();
q.pop();

if(node!=NULL){
if(level == k){
sum+=node->data;
}
if(node->left) q.push(node->left);

if(node->right) q.push(node->right);
}

else if(!q.empty()){
q.push(NULL);
level++;
}
}

return sum;

}