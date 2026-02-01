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
        Node* newNode = new Node{val, tail, NULL};

        if(head == NULL)
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;
    }

    Node* temp = head;
    while(temp) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL";
}
