/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    int breakflag=0;
    Node *ptra=(Node *)malloc(sizeof(struct Node));
    Node *ptrb=(Node *)malloc(sizeof(struct Node));
    ptra=headA;
    ptrb=headB;
    while(ptra!=NULL)
        {
        ptrb=headB;
        while(ptrb!=NULL)
            {
        //ptra=ptra->next;
        ptrb=ptrb->next;
            if(ptra==ptrb){breakflag=1;break;}
        }if (breakflag==1 )break;
    ptra=ptra->next;}
    return ptra->data;
    // Complete this function
    // Do not write the main method. 
}

