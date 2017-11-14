#include <bits/stdc++.h>
#include<string>
using namespace std;

string isBalanced(string str) {
    // Complete this function
    stack <char> s;
    char ch;
    int val=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{'||str[i]=='['||str[i]=='(')
            s.push(str[i]);
        else if(str[i]=='}')
        {
            if(s.empty()==0)
            {
            ch=s.top();
            
            if(ch=='{')s.pop();
                else {val=0;break;}
            }
            else {val=0;break;}
        }
         else if(str[i]==')')
        {
             if(s.empty()==0)
             {
            ch=s.top();
            //cout<<ch; 
            if(ch=='(')s.pop();
             else {val=0;break;}}
            else {val=0;break;}
        }
         else if(str[i]==']')
        {
             if(s.empty()==0)
             {
            ch=s.top();
            if(ch=='['){s.pop();}
                       else{val=0;break;}}
            else {val=0;break;}
        }
    }
    if(val==1&&s.empty()==1)return "YES";
    else return "NO";
}

int main() {
    int t;
    cin >> t;
    
    //check whether stack is empty before popping and also before returning final value if correct stack shud be empty
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}

