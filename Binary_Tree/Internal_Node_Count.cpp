#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val){ data=val; left=right=nullptr; }
};

Node* insert(Node* root,int val){
    Node* newNode=new Node(val);
    if(!root) return newNode;
    queue<Node*> q; q.push(root);
    while(!q.empty()){
        Node* temp=q.front(); q.pop();
        if(!temp->left){ temp->left=newNode; return root; }
        else q.push(temp->left);
        if(!temp->right){ temp->right=newNode; return root; }
        else q.push(temp->right);
    }
    return root;
}

int countInternal(Node* root){
    if(!root || (!root->left && !root->right)) return 0;
    return 1 + countInternal(root->left) + countInternal(root->right);
}

int main(){
    Node* root=nullptr;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){ cin>>val; root=insert(root,val); }
    cout << countInternal(root) << endl;
    return 0;
}
