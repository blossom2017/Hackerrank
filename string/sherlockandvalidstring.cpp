#include <bits/stdc++.h>

using namespace std;

string isValid(string s){
    vector<int > arr(26);
    int index;
    for(int i=0;i<26;i++)arr[i]=0;
    for(int i=0;i<s.size();i++)
    {
        index=s[i]-'a';
        arr[index]++;
        
    }
    int max;
   int f=0;
    int val1=-1,val2=-1;
    int count1=0,count2=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0&&val1==-1)
        {
            val1=arr[i];
        }
        else if(arr[i]!=0&&arr[i]!=val1&&val2==-1)
        {
            val2=arr[i];
        }
        else if(arr[i]!=0&&arr[i]!=val1&&arr[i]!=val2)
        {
            f=1;
            break;
        }
        else if(arr[i]==val1)count1++;
        else if(arr[i]==val2)count2++;
    }
    if(f==1)return "NO";
    int comp;
    if(count1>count2)comp=val1;
    else comp=val2;
    
    int min=100000;
    
    int flagonce=0,flag=0;
  //  int comp=-1;
    
    for(int i=0;i<26;i++)
    {
        //if(arr[i]!=0&&comp==-1)comp=arr[i];
        if(arr[i]!=0&&arr[i]!=comp){
       //    cout<<arr[i]<<" "<<i<<comp;
            if(flagonce==0)
            {
           arr[i]--;}
             flagonce=1;
            if(arr[i]!=comp&&arr[i]!=0){flag=1;break;}
          
        }
       
    }
    if(flag==1)return "NO";
    else return "YES";
    // Complete this function
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}

