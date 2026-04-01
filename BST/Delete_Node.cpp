#include <iostream>
using namespace std;

struct Node { 
int data; 
Node* left; 
Node* right; 
Node(int val)
{ 
  data=val; 
  left=right=nullptr; 
} 
};

Node* insert(Node* root,int val)
{ 
  if(!root) return new Node(val); 
  if(val<root->data) root->left=insert(root->left,val); 
  else root->right=insert(root->right,val); 
  return root; 
}

Node* minValueNode(Node* root)
{ 
  Node* curr=root; 
  while(curr && curr->left) curr=curr->left; 
  return curr; 
}

Node* deleteNode(Node* root,int val){
    if(!root) return root;
    if(val<root->data) root->left=deleteNode(root->left,val);
    else if(val>root->data) root->right=deleteNode(root->right,val);
    else{
        if(!root->left){ Node* temp=root->right; delete root; return temp; }
        else if(!root->right){ Node* temp=root->left; delete root; return temp; }
        Node* temp=minValueNode(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}

void inorder(Node* root){ if(!root) return; inorder(root->left); cout<<root->data<<" "; inorder(root->right); }

int main(){
    Node* root=nullptr; int n,val,delVal;
    cin>>n;
    for(int i=0;i<n;i++){ cin>>val; root=insert(root,val); }
    cin>>delVal;
    root=deleteNode(root,delVal);
    inorder(root); cout<<endl;
    return 0;
}
