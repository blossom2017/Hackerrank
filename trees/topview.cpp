/*

struct node
{
    int data;
    node* left;
    node* right;
};

*/
void topview2(node * node,int sign)
    {
    if(node)
        {
        if(sign==1){
            topview2(node->left,1);
            cout<<node->data<<" ";
        }
        else {
            cout<<node->data<<" ";
            topview2(node->right,0);
            
        }
    }
}

void topView(node * root) {
 topview2(root->left,1);
    cout<<root->data<<" ";
    topview2(root->right,0);
 }
  


