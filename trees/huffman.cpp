/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/
#include<string>
#include<queue>
void decode_huff(node * root,string s)
{
    node * ptr=(node *)root;
    int i=0;
    char ch;
    queue<char>q;
    //cout<<s[i];
    //cout<<s.length();
   while(i<s.length())
        {
       //cout<<"enter";
        if(s[i]=='1'&&ptr->data=='\0'){ptr=ptr->right;i++;}
        else if(s[i]=='0'&& ptr->data=='\0'){ptr=ptr->left;i++;}
         if(ptr->data!='\0'){cout<<(ptr->data);ptr=root;}
    }
    
   
}

