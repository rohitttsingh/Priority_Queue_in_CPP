
#include <c++/v1/bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    int priority;
    Node *next;
} Queue;

Node * create( int data, int priority){
    
    Queue * Newnode = new Queue();
    Newnode->data=data;
    Newnode->priority=priority;

    Newnode->next=NULL;
    return Newnode;
}


void insert(Node** head, int d, int p)
{
    Queue* start = (*head);
    Queue* temp = create(d, p);
  
    
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
        cout<<"|  "<<root->data<<" |  "<<root->priority<<" |  "<<endl<<"------------"<<endl;
        root=root->next;
    }
}


int main(){
    
    Queue *head = create(23, 2);
    
     insert(&head, 31, 4);
     insert(&head, 21, 7);
     insert(&head, 19, 3) ;
     insert(&head, 25, 6) ;
     insert(&head, 42, 5);
     insert(&head, 61, 1);
     insert(&head, 29, 8);
    
     print(head);

   
    return 0;
}
        
