#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    //int i=0;
  long   int maxsofar=s[0];
   int minsofar=s[0];
    vector<int>ans(2);
    ans[0]=0;
    ans[1]=0;
    for (int i=1;i<s.size();i++)
    {
        if(s[i]>maxsofar)
        {
            ans[0]++;
            maxsofar=s[i];
        }
        if(s[i]<minsofar)
        {
            ans[1]++;
            minsofar=s[i];
        }
        
    }
    return ans;
    // Complete this function
    
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}

