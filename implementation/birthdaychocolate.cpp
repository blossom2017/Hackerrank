#include <bits/stdc++.h>
//illustartes the use of two pointers 
using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int sum=0;
    
    for(int i=0;i<m;i++)
    // Complete this function
    {
        sum+=s[i];
    }
    int front=0;
    int j=m;
    int count=0;
    if(sum==d)count=1;
    while(j<n)
    {
        sum=sum-s[front]+s[j];
        if(sum==d)count++;
        front++;
        j++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

