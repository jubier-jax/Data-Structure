#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) { data = val; left = right = nullptr; }
};

int height(Node* root) {
    if(!root) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}

int main() {
    Node* root = nullptr;
    int n, val;
    cin >> n;
    for(int i=0;i<n;i++) { cin >> val; root = new Node(val); }
    cout << height(root) << endl;
    return 0;
}
