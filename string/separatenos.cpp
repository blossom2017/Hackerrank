#include <bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int flag=0;
        string s;
        cin >> s;
        if(s.length()==1||s[0]=='0')
        {cout<<"NO"<<endl;
        continue;
        }
     //   if(s[0]=='0'){cout<<"NO"<<endl;break;}
        // your code goes here
        for(int i=1;i<=s.length()/2;i++)
        {
      //  int firstdigit=s[0]-'0';
        
        string newstr=s.substr(0,i);
            int l=i;
        //newstr.push_back(s[0]);
            
      long   int d;
            stringstream(newstr)>>d;
           long  int firstdigit;
            stringstream(newstr)>>firstdigit;
          //  if(l>1&&firstdigit<=9){flag=0;break;}
        while(l<s.length() )
        {
            d=d+1;
           std::string sadd= std::to_string(d);
            newstr=newstr+sadd;
            l=l+sadd.length();
            if(l==s.length())break;
        }
      // cout<<newstr;
        if(newstr==s){cout<<"YES"<<" "<<firstdigit<<endl;flag=1;break;}}
        if(flag==0)cout<<"NO"<<endl;
      
        
   //     cout<<firstdigit;
    }
    return 0;
}

