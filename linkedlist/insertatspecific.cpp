/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    struct Node *newnode=(struct Node* )malloc(sizeof(struct Node));
    struct Node *ptr=(struct Node* )malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    ptr=head;
    if((head==NULL)&&(position==0))
    {
    return newnode;
    }
    else 
        {if(position==0)
            {newnode->next=head;
            head=newnode;
            
            return head;
        }
        
        
       else if(position==1){
            ptr=head;
            newnode->next=head->next;
            head->next=newnode;
           return head;
        }
        else{
            ptr=head;
        for(int i=0;i<position-1;i++)
            {
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
             return head;
        }
       
        
    }
}


