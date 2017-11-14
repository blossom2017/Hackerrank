#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    int x,y,num;
    //char x[2],y[2];
    if(s[8]=='P')
    {
       
        x=s[0]-'0';y=s[1]-'0';
         
        //cout<<"x is"<<x;
        
        //cout<<"y is "<<y;
        num=10*x+y;
        if (num<12){
        num=num+12;
        //cout<<num;
        s[0]=(num/10)+'0';
       //cout<<s[0];
        s[1]=(num%10)+'0';
        }}
        else {
            x=s[0]-'0';y=s[1]-'0';
         
        //cout<<"x is"<<x;
        
        //cout<<"y is "<<y;
        num=10*x+y;
         if(num==12)   num=num-12;
        //cout<<num;
        s[0]=(num/10)+'0';
       //cout<<s[0];
        s[1]=(num%10)+'0';
        }
       
    
    return s.substr(0,8);
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}

