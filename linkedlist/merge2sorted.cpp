/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node* result=(Node*)malloc(sizeof(Node));
    if(headA==NULL)return headB;
    else if(headB==NULL)return headA;
        else{
        if(headA->data>headB->data)
            {
            result=headB;
            result->next=MergeLists(headA,headB->next);
        }
        else{
            result=headA;
            result->next=MergeLists(headA->next,headB);
        }
    }
    
  // This is a "method-only" submission. 
  // You only need to complete this method 
    return result;
}

