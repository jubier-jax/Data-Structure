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

    for(Node* i=head;i;i=i->next){
        for(Node* j=i->next;j;j=j->next){
            if(i->data > j->data)
                swap(i->data,j->data);
        }
    }

    for(Node* t=head;t;t=t->next)
        cout<<t->data<<" ";
}
