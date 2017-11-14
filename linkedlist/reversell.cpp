/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
     struct Node * temp2=(struct Node *)malloc(sizeof(struct Node));
     struct Node * temp=(struct Node *)malloc(sizeof(struct Node));
     struct Node * prev=(struct Node *)malloc(sizeof(struct Node));
  // Complete this method
    if(head==NULL)return NULL;
    if(head->next==NULL)return head;
   else{
       prev=head;
       ptr=head->next;
       
       while(ptr!=NULL)
           {
           temp=ptr;
           temp2=ptr->next;
           ptr->next=prev;
           ptr=temp2;
           prev=temp;       
       }
       head->next=NULL;
       head=prev;
       return head;
   }
}

