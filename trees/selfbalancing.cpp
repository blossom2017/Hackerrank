/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */


int getheight(node * root)
{
    if(root==NULL)return -1;
    else return root->ht; 
    
}
int balance(node * root)
{
    return( getheight(root->left)-getheight(root->right));
}
int max(int a ,int b)
{
    return (a>b)?a:b;
}
node * leftrotate(node * root)
{
    node * ptr=(node *)malloc(sizeof(node));
    node * ptr1=(node *)malloc(sizeof(node));
    ptr1=root->right;
    ptr=root->right->left;
    ptr1->left=root;
    ptr1->left->right=ptr;
    root->ht=max(getheight(root->left),getheight(root->right))+1;
    ptr1->ht=max(getheight(ptr1->left),getheight(ptr1->right))+1;
    return ptr1;
}
node * rightrotate(node * root)
{
    
  node * ptr=(node *)malloc(sizeof(node));
    node * ptr1=(node *)malloc(sizeof(node));
    ptr=root->left->right;
    ptr1=root->left;
    ptr1->right=root;
  root->left=ptr;
    root->ht=max(getheight(root->right),getheight(root->left))+1;
    ptr1->ht=max(getheight(ptr1->right),getheight(ptr1->left))+1;
    return ptr1;
    
    
}
    

node * insert(node * root,int val)
{
    if(root==NULL){node * newnode=(node *)malloc(sizeof(node));
                   newnode->val=val;newnode->ht=0;newnode->left=NULL;newnode->right=NULL;
                   return newnode;
                  }
    
  
    else if(val<root->val)root->left= insert(root->left,val);
    else if(root->val<val)root->right= insert(root->right,val);
    else return root;
    
    root->ht=max(getheight(root->left),getheight(root->right))+1;
    if(balance(root)>1&&val<root->left->val)
    {root=rightrotate(root);
     return root;
    }
  else if(balance(root)>1 && val>root->left->val)
  {
      root->left=leftrotate(root->left);
      root=rightrotate(root);
      return root;
  }
    else if(balance(root)<-1&&val>root->right->val)
    {
        root=leftrotate(root);
        return root;
    }
    else if(balance(root)<-1&&val<root->right->val)
    {
        root->right=rightrotate(root->right);
        root=leftrotate(root);
        return root;
    }
    else return root;
}




