#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;
int arr[5000];
queue <int> v1;

 struct node{
    struct node * left;
    struct node * right;
    int data;
};
typedef struct node node;
node * original;
node * createtree(int num)
{
    node * root=(node * )malloc(sizeof(node));
    root->data=1;
    queue<node *>q;
    q.push(root);
    node * tempnode=(node *)malloc(sizeof(node));
    int i=0;
    while(tempnode!=NULL&&i<num*2)
    {
         tempnode=q.front();
        q.pop();
        node * newnode=(node *)malloc(sizeof(struct node));
        node * new2=(node *)malloc(sizeof(struct node));
        tempnode->left=newnode;
        tempnode->right=new2;
        tempnode->left->data=arr[i];
        tempnode->right->data=arr[i+1];
        if(tempnode->left->data!=-1)q.push(tempnode->left);
        if(tempnode->right->data!=-1) q.push(tempnode->right);
        i+=2;
    }
    return root;
}
void  inorder(node * root)
{
    //cout<<"entering inorder";
    if(root==NULL)
        return;
    
    
     if(root->left->data!=-1)inorder(root->left);   
    
    if(root->data!=-1){cout<<root->data<<" ";}
    
    if(root->right->data!=-1)inorder(root->right);
    
}



void swap(node * root, int level,int ele)
{
  if(root==NULL||(root->left&&root->right==NULL))return;
    else if(level==ele ){
       //cout<<"doing the swapping AND level is"<<level<<"ele is"<<ele;
        node * tempnode=root->left;
        root->left=root->right;
        root->right=tempnode;
        //cout<<"the nodes that were swapped are"<<root->left->data<<"and"<<root->right->data;
        //inorder(original);
        //cout<<"size of vector now"<<v1.size();
        //cout<<endl;
        
    }
    else {
        if(root->right->data!=-1)swap(root->right,level+1,ele);
    if(root->left->data!=-1)swap(root->left,level+1,ele);}
}

int getheight(node * root)
{
    int hleft=0,hright=0;
    if(root==NULL)return 0;
    else{
    if(root->left->data!=-1) hleft=1+getheight(root->left);
    if(root->right->data!=-1) hright=1+getheight(root->right);
    if(hleft>=hright)return hleft;
        else return hright;
}}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num,k,ele;
    cin>>num;
    int i,j,x1,x2;
        for(j=0;j<num*2;)
        {
          cin>>x1>>x2;
          arr[j]=x1;
          arr[j+1]=x2;
          j+=2;  
        }
    //j=j-2;
    //cout<<arr[j];
    original=createtree(num);
    int height=getheight(original);
    //cout<<"height is "<<height;
    //inorder(original);
    //cout<<"end of inorder";
    cin>>k;
    //cout<<k;
    for(i=0;i<k;i++)
    {
        cin>>ele;
        v1.push(ele);
        
    }
    //cout<<"sizeof Q initially"<<v1.size();
    int temp;
    while( !v1.empty())
    {
         temp=v1.front();
         //cout<<"value of temp is "<<temp<<endl;
         v1.pop();
         swap(original,1,temp);
         for(i=2;temp*i<=height;i++)
         {
             swap(original,1,temp*i);
         }
         inorder(original);
         cout<<"\n";
     }
  
    

    
    
            return 0;
}


