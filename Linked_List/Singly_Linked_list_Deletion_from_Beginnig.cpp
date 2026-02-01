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

Node* deleteBegin(Node* head) {
    if (head == NULL)
        return NULL;

    Node* temp = head;
    head = head->next;
    delete temp;
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

    head = deleteBegin(head);

    display(head);

    return 0;
}
