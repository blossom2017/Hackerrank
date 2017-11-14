/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    if(head==NULL)return NULL;
    else if(head->next==NULL)return head;
        else
        {
        Node* ptr=(Node*)malloc(sizeof(struct Node));
        Node* prev=(Node*)malloc(sizeof(struct Node));
        prev=head;
        ptr=head->next;
        while(ptr!=NULL)
            {
            if(prev->data==ptr->data)
               
            {prev->next=ptr->next;
             ptr=ptr->next;
            }
            else{
            ptr=ptr->next;
            prev=prev->next;
            
            }}
        return head;
    }
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

