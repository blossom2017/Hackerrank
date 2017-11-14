/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=head;
    if(head!=NULL)
        {
   
       
    while(ptr!=NULL)
        {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }}
    
}

