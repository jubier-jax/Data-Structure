#include <iostream>
using namespace std;

struct Node { 
int data; 
Node* left; 
Node* right; 
Node(int val)
{ data=val; 
 left=right=nullptr; 
} 
};

Node* insert(Node* root,int val)
{ if(!root) return new Node(val); 
   if(val<root->data) root->left=insert(root->left,val); 
   else root->right=insert(root->right,val); 
 return root;
}

int findMin(Node* root)
{ 
  Node* curr=root; 
  while(curr && curr->left) 
    curr=curr->left; 
  return curr->data; 
}

int main(){
    Node* root=nullptr; int n,val; cin>>n;
    for(int i=0;i<n;i++){ cin>>val; root=insert(root,val); }
    cout<<findMin(root)<<endl;
    return 0;
}
