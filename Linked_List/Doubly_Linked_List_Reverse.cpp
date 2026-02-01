#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

int main(){
    int n; cin>>n;
    Node* head=NULL;
    Node* tail=NULL;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        Node* node=new Node{x,tail,NULL};
        if(!head) head=node;
        else tail->next=node;
        tail=node;
    }

    Node* curr=head;
    Node* temp=NULL;

    while(curr){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }

    if(temp) head=temp->prev;

    for(Node* t=head;t;t=t->next)
        cout<<t->data<<" ";
}
