/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/
//there should be 3 cases for lca search


node * lca(node * root, int v1,int v2)
{
    node *n=(node *)malloc(sizeof(node));
  if(root==NULL)return NULL;
    else{
        
        node * ptrv1=root;
        node * ptrv2=root;
        while(1)
        {
            n =ptrv1;
            if(v1>ptrv1->data)ptrv1=ptrv1->right;
            else if(v1<ptrv1->data)ptrv1=ptrv1->left;
            if(v2>ptrv2->data)ptrv2=ptrv2->right;
            else if(v2<ptrv2->data)ptrv2=ptrv2->left;
            if(ptrv1!=ptrv2)break;
        }
        return n;
    }
}


