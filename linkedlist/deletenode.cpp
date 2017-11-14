/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(head==NULL)return head;
    else if(position==0&&head->next==NULL)return NULL;
    else if(position==1) {
        struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
        temp=head->next->next;
        head->next=temp;
        return head;
    }
    else if(position==0)
        {
        head=head->next;
        return head;
    }
    else 
        {
        struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
        struct Node *previousptr=(struct Node *)malloc(sizeof(struct Node));
        ptr=head->next;
        previousptr=head;
        for(int i=0;i<position-1;i++)
            {
            ptr=ptr->next;
            previousptr=previousptr->next;
        }
        previousptr->next=ptr->next;
        return head;
    }
}

