
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height1(Node * root)
    {
     int h1,h2;
        if(root==NULL)return 0;
        else{
        // Write your code here.
        h1=1+height1(root->left);
            h2=1+height1(root->right);}
        if(h1>h2)return h1; else return h2;
}
    int height(Node* root) {
       int hh=height1(root)-1;
        return hh;
        }
  