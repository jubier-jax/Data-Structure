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

    Node* temp = head;
    head = head->next;
    if(head) head->prev = NULL;
    delete temp;

    temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
