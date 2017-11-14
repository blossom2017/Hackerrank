#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s){
    int i=0;
     int l=s.length()-1;
    int flag=0;
    while(i<=l)
    {
        if(s[i]!=s[l])
        {
            flag=1;
            break;
        }
        i++;
        l--;
    }
    if(flag==0)return -1;
    for(int i=0;i<s.length();i++)
    {
        int j=s.length()-1-i;
        if(s[i]!=s[j])
        {
            int f=0;
            for(int x=i+1,y=j;x<=y;x++,y--)
            {
                if(s[x]!=s[y]){
                    f=1;
                    break;
                }
            }
            if(f==0)return i;
            f=0;
            for(int x=i,y=j-1;x<=y;x++,y--){
                if(s[x]!=s[y]){
                    f=1;
                break;    
                }
            }
            if(f==0)return j;
        }
    }
    return -1;
    // Complete this function
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}

