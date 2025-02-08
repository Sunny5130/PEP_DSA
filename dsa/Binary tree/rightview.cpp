
void rightView(Node* root){
    
if(root==NULL) return;

queue<Node*> q;
q.push(root);

while(!q.empty()){
//we will not add null in queue, we will calculate the size of the queue and check how many modes are stored and traverse over it
int n = q.size();
for(int i = 0; i < n; i++){
//creating a curr pointer that will start from the front of queue
Node* curr = q.front();
q.pop();

//when we will reach at last node
if(i == n-1){
cout << curr->data << " ";
}

//then we will go on left and right of current node
if(curr->left) q.push(curr->left);
if(curr->right) q.push(curr->right);
}
}
}