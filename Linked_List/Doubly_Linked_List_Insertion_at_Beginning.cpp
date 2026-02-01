#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* head = NULL;
    int val;
    cin >> val;

    Node* newNode = new Node{val, NULL, head};
    if(head != NULL)
        head->prev = newNode;
    head = newNode;

    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
