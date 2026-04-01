#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) { data = val; left = right = nullptr; }
};

Node* insert(Node* root,int val){
    if(!root) return new Node(val);
    if(val<root->data) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}

bool search(Node* root,int val){
    if(!root) return false;
    if(root->data==val) return true;
    if(val<root->data) return search(root->left,val);
    return search(root->right,val);
}

int main(){
    Node* root=nullptr;
    int n,val;
    cin >> n;
    for(int i=0;i<n;i++){ cin >> val; root=insert(root,val); }
    cin >> val;
    cout << (search(root,val)?"Found":"Not Found") << endl;
    return 0;
}
