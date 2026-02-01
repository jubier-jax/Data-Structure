#include <iostream>
using namespace std;

struct Node {
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

    int key; cin>>key;
    int pos=1;

    for(Node* t=head;t;t=t->next,pos++){
        if(t->data==key){
            cout<<"Found at position "<<pos;
            return 0;
        }
    }
    cout<<"Not Found";
}
