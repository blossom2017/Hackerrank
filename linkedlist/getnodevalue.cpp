/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    int count,pos;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* ptr=(Node*)malloc(sizeof(struct Node));
    ptr=head;
    count=0;
    while(ptr->next!=NULL)
        {
        ptr=ptr->next;
        count++;
    }
    pos=count-positionFromTail;
    ptr=head;
    
    while(pos>0)
        {
        ptr=ptr->next;
        pos--;
    }
    return ptr->data;
}

