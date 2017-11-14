/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=value;
    newnode->left=NULL;
    
if(root==NULL)return newnode;
    else if(root->data<value&&root->right==NULL){root->right=newnode;}
    else if(root->data>value&&root->left==NULL){root->left=newnode;}
    else if(root->data<value &&root->right!=NULL)root->right=insert(root->right,value);
        else if (root->data>value&&root->left!=NULL){root->left=insert(root->left,value);}
    
   return root;
}

