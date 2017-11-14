#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
struct gg{
    int num;
    vector<string > s;
   vector< int> hf;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int half=n/2;
    vector< gg> x(100);
    int val;
    string temp;
    for(int i=0;i<100;i++)x[i].num=-1;
    for(int i=0;i<n;i++)
    {
        cin>>val>>temp;
        x[val].num=val;
    x[val].s.push_back(temp);
        if(i<half)x[val].hf.push_back(1);
        else x[val].hf.push_back(0);
    
    }
   // for(int i=0;i<100;i++)cout<<x[i].num;
    for(int i=0;i<100;i++)
    {
        if(x[i].num!=-1)
        {
            for(int k=0;k<x[i].s.size();k++)
            {
            if(x[i].hf[k]==0)    cout<<x[i].s[k]<<" ";
                else cout<<"- ";
            }
        }
    }
    
    return 0;
}

