#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int length=s.length();
    int matrow=int(sqrt(length));
    int matcol=int(sqrt(length));
    if(matrow*matcol<length)matcol++;
   if(matrow*matcol<length)matrow++;
  //  cout<<matrow<<matcol;
    vector <vector <char> > mat(matrow,vector<char>(matcol));
   // cout<<mat.size();
    int i=0;
   for(int l=0;l<matrow;l++)
    {
        for(int k=0;k<matcol;k++)
        {
            if(s[i]!=' ')
            {    
            mat[l][k]=s[i];
            i++;
            }
            if(i==s.length())break;
        }
       if(i==s.length())break;
    }
    for(int l=0;l<matcol;l++)
    {
        for(int k=0;k<matrow;k++)
        {
            //stopo outputting if there are no characters
           if(mat[k][l]) cout<<mat[k][l];
        }
       if(l!=matcol-1) cout<<" ";
    }
   // cout<<"l";
    return 0;
}

