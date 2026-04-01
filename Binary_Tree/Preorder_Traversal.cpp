#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) { data = val; left = right = nullptr; }
};

void preorder(Node* root) {
    if(!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, val;
    cin >> n;
    for(int i=0;i<n;i++) { cin >> val; root = new Node(val); }
    preorder(root);
    return 0;
}
