#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    int n; cin >> n;
    Node* head = NULL;
    Node* tail = NULL;

    for(int i=0;i<n;i++){
        int x; cin >> x;
        Node* node = new Node{x, tail, NULL};
        if(!head) head = node;
        else tail->next = node;
        tail = node;
    }

    if(tail){
        Node* temp = tail;
        tail = tail->prev;
        if(tail) tail->next = NULL;
        else head = NULL;
        delete temp;
    }

    for(Node* t=head;t;t=t->next)
        cout << t->data << " ";
}
