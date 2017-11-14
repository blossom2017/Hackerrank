/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
     // Complete this function
    // Do not write the main method.
    //it was not terminating since you are changing the next pt of the second node .Hence in the second last node it will change next pointer of last node 
    Node * ptr=(Node *)malloc(sizeof(Node));
    Node * temp=(Node *)malloc(sizeof(Node));
    Node * temp1=(Node *)malloc(sizeof(Node));
    ptr=head;
    if(head==NULL||head->next==NULL)return head;
    else{
        while(ptr!=NULL)
        {
            temp1=ptr;
           temp=ptr->next;
            ptr->next=ptr->prev;
            ptr->prev=temp;
          
            ptr=ptr->prev;
        }
        //ptr->next=ptr->prev;
       //ptr->prev=NULL;
        head=temp1;
        return head;
        
    }
}

