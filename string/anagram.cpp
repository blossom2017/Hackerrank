#include <bits/stdc++.h>

using namespace std;

int anagram(string s){
    if(s.length()%2==1)return -1;
    vector<int > ch(26);
    for(int i=0;i<26;i++)ch[i]=0;
    for(int i=s.length()/2;i<s.length();i++)
    {
       int val=s[i]-'a';
        ch[val]++;
    }
    for(int i=0;i<s.length() /2;i++)
    {
        int val=s[i]-'a';
        ch[val]--;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(ch[i]>0)count+=ch[i];
    }
    return count;
    // Complete this function
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = anagram(s);
        cout << result << endl;
    }
    return 0;
}

