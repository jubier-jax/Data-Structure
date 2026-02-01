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

int findPosition(Node* head, int key) {
    int pos = 1;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key)
            return pos;
        temp = temp->next;
        pos++;
    }
    return -1;
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

    display(head);
    cout << endl;

    cout << "Position of 20: " << findPosition(head, 20) << endl;
    cout << "Position of 50: " << findPosition(head, 50) << endl;

    return 0;
}
