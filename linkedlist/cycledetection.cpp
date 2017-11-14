/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    
    int cycle=0;
    if(head==NULL)return 0;
    else if(head->next==NULL)return 0;
        else if(head->next==head)return 1;
        
        else
    {    
    Node * hare=(Node*)malloc(sizeof(Node));
    Node * slow=(Node*)malloc(sizeof(Node));
    hare=head->next;
    slow=head;
    
    while(hare->next!=NULL && hare!=NULL)
        {
        hare=hare->next->next;
        slow=slow->next;
        if(hare==slow)
        {cycle=1;
         
         break;
        }
        
    
    }
        return cycle;    
    
    // Complete this function
    // Do not write the main method
    }}

