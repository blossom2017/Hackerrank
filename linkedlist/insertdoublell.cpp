/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{// Complete this function
   // Do not write the main method. 
    Node * ptr=(Node *)malloc(sizeof(Node));
    Node * temp=(Node *)malloc(sizeof(Node));
    ptr=head;
    Node * newnode=(Node *)malloc(sizeof(Node));
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->data=data;
    if(head==NULL)return newnode;
    else if(data<head->data){newnode->next=head;head->prev=newnode;return newnode;}
    else {while(ptr->data<data&&ptr->next!=NULL)
     {
        ptr=ptr->next;
    }
          if(ptr->next==NULL){if(data>ptr->data){newnode->prev=ptr;ptr->next=newnode;}else{
                             ptr->prev->next=newnode;
                             newnode->prev=ptr->prev;
                             newnode->next=ptr;
              ptr->prev=newnode;}}
          else {newnode->prev=ptr->prev;
        temp=ptr->prev;
    temp->next=newnode;
    
    ptr->prev=newnode;
        newnode->next=ptr;}
          return head;
    }
    
    
    
    }

