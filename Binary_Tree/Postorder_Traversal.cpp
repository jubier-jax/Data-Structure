#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) { data = val; left = right = nullptr; }
};

void postorder(Node* root) {
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;
    int n, val;
    cin >> n;
    for(int i=0;i<n;i++) { cin >> val; root = new Node(val); }
    postorder(root);
    return 0;
}
