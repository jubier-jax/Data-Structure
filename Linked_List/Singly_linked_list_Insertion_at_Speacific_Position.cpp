#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* insertAtPosition(Node* head, int val, int pos) {
    Node* newNode = new Node(val);

    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
        return head;

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    head = insertAtPosition(head, 10, 1);
    head = insertAtPosition(head, 20, 2);
    head = insertAtPosition(head, 15, 2);
    head = insertAtPosition(head, 5, 1);

    display(head);

    return 0;
}
