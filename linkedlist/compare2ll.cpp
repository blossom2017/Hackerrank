/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    int counta=0,countb=0;
    int result=1;
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA==NULL&&headB==NULL)return 1;
    else
        {
        struct Node *ptra=(struct Node*)malloc(sizeof(struct Node));
        struct Node *ptrb=(struct Node*)malloc(sizeof(struct Node));
        ptra=headA;
        ptrb=headB;
        while(ptra!=NULL&&ptrb!=NULL)
            {
            if(ptra->data!=ptrb->data)
            {
                result=0;
                
            }
            ptra=ptra->next;
            ptrb=ptrb->next;
            
           
    }
        if(ptra!=ptrb)result=0;
        return result;
    }}
   