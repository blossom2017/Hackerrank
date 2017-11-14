/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions. 
The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
//#include<algorithm>

vector<int > v1;
/*bool check(Node * root){
    bool index1=true,index2=true;
    if(root==NULL)return true;
    else{
     if(root->left!=NULL){if(root->left->data>root->data)index1=false;}
     if(root->right!=NULL){if(root->right->data<root->data)index2=false;}
        return (index1&&index2);
}}*/
//inorder traverssal should be strictly increasing hence check if v1>[i]=v1[i+1]

void inorder(Node  * root)
{
    bool index1;
    if(root==NULL)return ;
    else{
        inorder(root->left);
        //index1=check(root);
        v1.push_back(root->data);
        //cout<<root->data;
        inorder(root->right);
    }
}
bool find()
{
    bool ret =true;
    int i;
    for(i=0;i+1<v1.size();i++)
    {
        //cout<<v1[i]<<"and"<<v1[i+1];
        if(v1[i]>=v1[i+1])
        {ret=false;
        break;}
    }
    return ret;
}

   bool checkBST(Node* root) {
       inorder(root);
       //bool returnvalue=find(false);
           return (find());
       
   }

