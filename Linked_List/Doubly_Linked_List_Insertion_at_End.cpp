#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node* node = new Node{val, tail, NULL};

        if(head == NULL)
            head = node;
        else
            tail->next = node;

        tail = node;
    }

    int x;
    cin >> x;

    Node* newNode = new Node{x, tail, NULL};
    tail->next = newNode;
    tail = newNode;

    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
