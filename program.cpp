
#include <c++/v1/bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    int priority;
    Node *next;
};

Node * create( int data, int priority){
    
    Node * Newnode = new Node();
    Newnode->data=data;
    Newnode->priority=priority;

    Newnode->next=NULL;
    return Newnode;
}


void insert(Node** head, int d, int p)
{
    Node* start = (*head);
    Node* temp = create(d, p);
  
    
    if ((*head)->priority > p)
    {
          
        temp->next = *head;
        (*head) = temp;
    }
    else
    {
          
        while (start->next != NULL &&
            start->next->priority < p)
        {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
    
}

void print(Node *root){
    while(root!=NULL){
        cout<<root->data<<"->"<<root->priority<<endl;
        root=root->next;
    }
}
int main(){
    
    Node *head = create(231, 2);
    
     insert(&head, 31, 4);
     insert(&head, 21, 7);
     insert(&head, 1, 3);
     insert(&head, 2, 6);
     insert(&head, 42, 5);
     insert(&head, 61, 1);
     insert(&head, 29, 8);
    
    print(head);

   
    return 0;
}
        
