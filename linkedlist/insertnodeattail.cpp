/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    newnode->next=NULL;
    newnode->data=data;
    ptr->next=NULL;
    ptr=head;
    if(head==NULL)
    {head=newnode;
     return head;}
    else{ while(ptr->next!=NULL)
        {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    return head;
        }}

