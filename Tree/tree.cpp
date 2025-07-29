#include<iostream>
#include<vector>
using namespace std;
 class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
    static int ind=-1;
    Node* buildtree(vector<int>arr){
        ind++;
        if(arr[ind]==-1){
            return NULL;
        }
        Node * root=new Node(arr[ind]);
        root->left=buildtree(arr);
        root->right=buildtree(arr);
        return root;
    }  
    
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildtree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;
}