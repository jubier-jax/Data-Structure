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

int main() 
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);


    head->next = second;
    second->next = third;
    third->next = NULL;


    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
