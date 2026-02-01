#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    int n; cin >> n;
    Node* head=NULL;
    Node* tail=NULL;

    for(int i=0;i<n;i++){
        int x; cin >> x;
        Node* node=new Node{x,tail,NULL};
        if(!head) head=node;
        else tail->next=node;
        tail=node;
    }

    int pos; cin >> pos;

    Node* temp=head;
    for(int i=1;i<pos && temp;i++)
        temp=temp->next;

    if(temp){
        if(temp->prev) temp->prev->next=temp->next;
        else head=temp->next;

        if(temp->next) temp->next->prev=temp->prev;
        delete temp;
    }

    for(Node* t=head;t;t=t->next)
        cout<<t->data<<" ";
}
