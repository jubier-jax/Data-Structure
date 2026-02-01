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

Node* deleteAtPosition(Node* head, int pos) {
    if (head == NULL)
        return NULL;

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return head;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;

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
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = deleteAtPosition(head, 2);
    head = deleteAtPosition(head, 1);
    head = deleteAtPosition(head, 5);

    display(head);

    return 0;
}
