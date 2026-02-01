#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* head = NULL;
    int pos, val;
    cin >> pos >> val;

    Node* newNode = new Node{val, NULL, NULL};

    if(pos == 1) {
        newNode->next = head;
        if(head) head->prev = newNode;
        head = newNode;
    } else {
        Node* temp = head;
        for(int i = 1; i < pos - 1; i++)
            temp = temp->next;

        newNode->next = temp->next;
        if(temp->next)
            temp->next->prev = newNode;

        temp->next = newNode;
        newNode->prev = temp;
    }

    Node* t = head;
    while(t) {
        cout << t->data << " ";
        t = t->next;
    }
}
