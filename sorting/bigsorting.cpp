#include <bits/stdc++.h>

using namespace std;
bool myfunc(string i,string j)
{
    int n=i.length();
    int m=j.length();
    if(n==m)
        return (i<j);
    return (n<m);
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    std::sort(unsorted.begin(),unsorted.end(),myfunc);
    // your code goes here
    for(int i=0;i<n;i++)cout<<unsorted[i]<<endl;
    return 0;
}

