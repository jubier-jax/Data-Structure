#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* head = NULL;

    if(head == NULL) return 0;

    Node* temp = head;
    head = head->next;
    if(head) head->prev = NULL;
    delete temp;
}
