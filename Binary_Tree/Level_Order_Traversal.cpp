#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) { data = val; left = right = nullptr; }
};

void levelOrder(Node* root) {
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main() {
    Node* root = nullptr;
    int n, val;
    cin >> n;
    for(int i=0;i<n;i++) { cin >> val; root = new Node(val); }
    levelOrder(root);
    return 0;
}
