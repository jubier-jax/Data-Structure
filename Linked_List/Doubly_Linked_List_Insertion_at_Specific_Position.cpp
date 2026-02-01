#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main(){
    int n; 
    cin>>n;
    Node* head=NULL;
    Node* tail=NULL;

    for(int i=0;i<n;i++)
    {
        int x; 
        cin>>x;
        
        Node* node=new Node{x,tail,NULL
    };
        if(!head) head=node;
        else tail->next=node;
        tail=node;
    }

    int pos,val; 
    cin>>pos>>val;

    if(pos==1){
        Node* node=new Node{val,NULL,head};
        head->prev=node;
        head=node;
    } else {
        Node* temp=head;
        for(int i=1;i<pos-1;i++)
            temp=temp->next;

        Node* node=new Node{val,temp,temp->next};
        if(temp->next) temp->next->prev=node;
        temp->next=node;
    }

    for(Node* t=head;t;t=t->next)
        cout<<t->data<<" ";
}
