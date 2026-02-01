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
        int x; 
         cin>>x;
        Node* node=new Node{x,tail,NULL};
        if(!head) head=node;
        else tail->next=node;
        tail=node;
    }

    while(head){
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    cout<<"List Deleted";
}
